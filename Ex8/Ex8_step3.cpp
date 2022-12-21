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
	double GetRadius() {
		return this->radius;
	}
};

void DisplayVolumeSurface(Solid* solid) {
	cout << "体積=" << solid->GetVolume() << endl;
	cout << "表面積=" << solid->GetSurface() << endl;
}

int GetPackSize(double length, int packSizes[],int packSizesLength) {
	int packSize = 0;
	//送るサイズを求める
	for (int i = 0; i <packSizesLength; i++) {
		if (length <= packSizes[i]) {
			packSize = packSizes[i];
			break;
		}
	}
	return packSize;
}

int GetKuronekoSize(double length) {
	int packSizes[] = { 60,80,100,120,140,160,180,200 };
	return GetPackSize(length,packSizes,_countof(packSizes));
}
int GetYupackSize(double length) {
	int  packSizes[] = { 60,80,100,120,140,160,170 };
	return GetPackSize(length, packSizes, _countof(packSizes));
}


int main()
{
	Box box{ 80.0, 10, 0.1 };
	Cylinder cylinder{ 30, 10 };
	Cone cone{ 30, 10 };
	Sphere sphere{ 30 };
	const int N_TABLE = 4;
	Solid* solid[N_TABLE] = { &box, &cylinder,&cone,&sphere };
	for (int i = 0; i < N_TABLE; i++) {
		DisplayVolumeSurface(solid[i]);
	}
	double length;
	int packSize;
	// 箱の宅急便のサイズを求める
	length = box.GetWidth() + box.GetHeight() + box.GetDepth();
	//クロネコで箱を送る
	packSize = GetKuronekoSize(length);
	if(packSize!=0){
		cout << "クロネコでの箱のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この箱はクロネコ宅急便では送れません" << endl;
	}
	//ゆうパックで箱を送る
	packSize = GetYupackSize(length);
	if (packSize != 0) {
		cout << "ゆうパックでの箱のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この箱はゆうパック宅急便では送れません" << endl;
	}

	// 円柱の宅急便のサイズを求める
	length = cylinder.GetRadius() * 4 + cylinder.GetHeight();
	//クロネコで円柱を送る
	packSize = GetKuronekoSize(length);
	if (packSize != 0) {
		cout << "クロネコでの円柱のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この円柱はクロネコ宅急便では送れません" << endl;
	}
	//ゆうパックで円柱を送る
	packSize = GetYupackSize(length);
	if (packSize != 0) {
		cout << "ゆうパックでの円柱のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この円柱はゆうパック宅急便では送れません" << endl;
	}

	// 円錐の宅急便のサイズを求める
	length = cone.GetRadius() * 4 + cone.GetHeight();
	//クロネコで円錐を送る
	packSize = GetKuronekoSize(length);
	if (packSize != 0) {
		cout << "クロネコでの円錐のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この円錐はクロネコ宅急便では送れません" << endl;
	}
	//ゆうパックで円錐を送る
	packSize = GetYupackSize(length);
	if (packSize != 0) {
		cout << "ゆうパックでの円錐のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この円錐はゆうパック宅急便では送れません" << endl;
	}

	// 球の宅急便のサイズを求める
	length = sphere.GetRadius() * 6;
	//クロネコで球を送る
	packSize = GetKuronekoSize(length);
	if (packSize != 0) {
		cout << "クロネコでの球のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この球はクロネコ宅急便では送れません" << endl;
	}
	//ゆうパックで箱を送る
	packSize = GetYupackSize(length);
	if (packSize != 0) {
		cout << "ゆうパックでの球のサイズは" << packSize << "サイズです" << endl;
	}
	else {
		cout << "この球はゆうパック宅急便では送れません" << endl;
	}
}