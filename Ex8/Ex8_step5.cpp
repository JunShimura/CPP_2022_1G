#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include<cstdlib>
using namespace std;

/// <summary>
/// 物体の定義
/// </summary>
class Solid {
public:
	virtual double GetVolume() = 0;
	virtual double GetSurface() = 0;
	virtual double GetPackLength() = 0;	//step5で追加
};

/// <summary>
/// 箱型
/// </summary>
class Box :public Solid {
private:
	double width;
	double height;
	double depth;
public:
	Box(
		double width,   //幅
		double height,  //高さ
		double depth    //奥行
	) :Solid() {
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	double GetVolume() {
		return width * height * depth;
	}
	double GetSurface() {
		return (width * height + height * depth + depth * width) * 2;
	}
	double GetPackLength() {
		return width + height + depth;
	}
	double GetWidth() {
		return this->width;
	}
	double GetHeight() {
		return this->height;
	}
	double GetDepth() {
		return this->depth;
	}
};

class Cylinder :public Solid {
private:
	double radius;
	double height;
public:
	Cylinder(
		double radius,  //　底面の半径
		double height   // 高さ
	) :Solid() {
		this->radius = radius;
		this->height = height;
	}
	double GetVolume() {
		return radius * radius * M_PI * height;
	}
	double GetSurface() {
		return radius * M_PI * 2 * (radius + height);
	}
	double GetPackLength() {
		return radius * 4 + height;
	}
	double GetRadius() {
		return this->radius;
	}
	double GetHeight() {
		return this->height;
	}
};

class Cone :public Solid {
private:
	double radius;
	double height;
public:
	Cone(
		double radius,  //　底面の半径
		double height   // 高さ
	) :Solid() {
		this->radius = radius;
		this->height = height;
	}
	double GetVolume() {
		return radius * radius * M_PI * height / 3.0;
	}
	double GetSurface() {
		return M_PI * radius * (radius + sqrt(radius * radius + height * height));
	}
	double GetPackLength() {
		return radius * 4 + height;
	}
	double GetRadius() {
		return this->radius;
	}
	double GetHeight() {
		return this->height;
	}
};

class Sphere :public Solid {
private:
	double radius;
public:
	Sphere(
		double radius  //　底面の半径
	) :Solid() {
		this->radius = radius;
	}
	double GetVolume() {
		return  M_PI * radius * radius * radius * 4 / 3;
	}
	double GetSurface() {
		return M_PI * radius * radius * 4;
	}
	double GetPackLength() {
		return radius * 6;
	}
	double GetRadius() {
		return this->radius;
	}
};

void DisplayVolumeSurface(Solid* solid) {
	cout << "体積=" << solid->GetVolume() << endl;
	cout << "表面積=" << solid->GetSurface() << endl;
}

class Courier
{
private:
	const int* packSizes;	//サイズ表のアドレス
	int length;					//サイズ表の要素数
public:
	Courier(
		int packSizes[],	//サイズ表のアドレス
		int length			//サイズ表の要素数
	) {
		this->packSizes = packSizes;
		this->length = length;
	}
	int GetPackSize(double length) {
		return GetPackSize(length, this->packSizes, this->length);
	}
	static int GetPackSize(double length, const int packSizes[], int packSizesLength) {
		int packSize = 0;
		//送るサイズを求める
		for (int i = 0; i < packSizesLength; i++) {
			if (length <= packSizes[i]) {
				packSize = packSizes[i];
				break;
			}
		}
		return packSize;
	}
};
class Package {	//荷物
private:
	Courier* courier=nullptr;	// 宅配業者
	Solid* solid=nullptr;		// 形
public:
	Package(Courier* courier, Solid* solid) {
		this->courier=courier;
		this->solid=solid;
	}
	int GetPackSize() {
		return courier->GetPackSize(solid->GetPackLength());
	}
};


int main()
{
	int kuronekoPackSizes[] = { 60,80,100,120,140,160,180,200 };
	Courier* courierKuroneko = new Courier(kuronekoPackSizes, (int)_countof(kuronekoPackSizes));

	int youpackPackSizes[] = { 60,80,100,120,140,160,170 };
	Courier* courierYoupack = new Courier(youpackPackSizes, (int)_countof(youpackPackSizes));

	Box box{ 80.0, 10, 0.1 };
	Cylinder cylinder{ 30, 10 };
	Cone cone{ 30, 10 };
	Sphere sphere{ 30 };
	
	Package package0{ courierKuroneko,&box };
	Package package1{ courierYoupack,&box };
	Package package2{ courierKuroneko,new Box(20,5,30)};
	Box* boxP = new Box(50, 25, 32);
	Package* package3 = new Package(courierKuroneko, boxP);
	Package* packages[] = {&package0,&package1,&package2,package3};
	for (int i = 0; i < _countof(packages); i++) {
		int packSize = packages[i]->GetPackSize();
			cout << "packageの"<<i<<"番目は" << packSize << "サイズです" << endl;
	}
	delete(boxP);
	int packSize= packages[3]->GetPackSize();
	cout << "package3は" << packSize << "サイズです" << endl;



	const int N_TABLE = 4;
	Solid* solid[N_TABLE] = { &box, &cylinder,&cone,&sphere };
	for (int i = 0; i < N_TABLE; i++) {
		DisplayVolumeSurface(solid[i]);
		//クロネコを送る
		double packSize = courierKuroneko->GetPackSize(solid[i]->GetPackLength());
		cout << "クロネコでの" << i << "番目の荷物は";
		if (packSize != 0) {
			cout << packSize << "サイズです" << endl;
		}
		else {
			cout << "送れません" << endl;
		}
		//ゆうパックで送る
		packSize = courierYoupack->GetPackSize(solid[i]->GetPackLength());
		cout << "ゆうパックでの" << i << "番目の荷物は";
		if (packSize != 0) {
			cout << packSize << "サイズです" << endl;
		}
		else {
			cout << "送れません" << endl;
		}
	}
}