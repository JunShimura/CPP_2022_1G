#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include<cstdlib>
using namespace std;

/// <summary>
/// ���̂̒�`
/// </summary>
class Solid {
public:
	virtual double GetVolume() = 0;
	virtual double GetSurface() = 0;
	virtual double GetPackLength() = 0;	//step5�Œǉ�
};

/// <summary>
/// ���^
/// </summary>
class Box :public Solid {
private:
	double width;
	double height;
	double depth;
public:
	Box(
		double width,   //��
		double height,  //����
		double depth    //���s
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
		double radius,  //�@��ʂ̔��a
		double height   // ����
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
		double radius,  //�@��ʂ̔��a
		double height   // ����
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
		double radius  //�@��ʂ̔��a
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
	cout << "�̐�=" << solid->GetVolume() << endl;
	cout << "�\�ʐ�=" << solid->GetSurface() << endl;
}

class Courier
{
private:
	const int* packSizes;	//�T�C�Y�\�̃A�h���X
	int length;					//�T�C�Y�\�̗v�f��
public:
	Courier(
		int packSizes[],	//�T�C�Y�\�̃A�h���X
		int length			//�T�C�Y�\�̗v�f��
	) {
		this->packSizes = packSizes;
		this->length = length;
	}
	int GetPackSize(double length) {
		return GetPackSize(length, this->packSizes, this->length);
	}
	static int GetPackSize(double length, const int packSizes[], int packSizesLength) {
		int packSize = 0;
		//����T�C�Y�����߂�
		for (int i = 0; i < packSizesLength; i++) {
			if (length <= packSizes[i]) {
				packSize = packSizes[i];
				break;
			}
		}
		return packSize;
	}
};
class Package {	//�ו�
private:
	Courier* courier=nullptr;	// ��z�Ǝ�
	Solid* solid=nullptr;		// �`
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
			cout << "package��"<<i<<"�Ԗڂ�" << packSize << "�T�C�Y�ł�" << endl;
	}
	delete(boxP);
	int packSize= packages[3]->GetPackSize();
	cout << "package3��" << packSize << "�T�C�Y�ł�" << endl;



	const int N_TABLE = 4;
	Solid* solid[N_TABLE] = { &box, &cylinder,&cone,&sphere };
	for (int i = 0; i < N_TABLE; i++) {
		DisplayVolumeSurface(solid[i]);
		//�N���l�R�𑗂�
		double packSize = courierKuroneko->GetPackSize(solid[i]->GetPackLength());
		cout << "�N���l�R�ł�" << i << "�Ԗڂ̉ו���";
		if (packSize != 0) {
			cout << packSize << "�T�C�Y�ł�" << endl;
		}
		else {
			cout << "����܂���" << endl;
		}
		//�䂤�p�b�N�ő���
		packSize = courierYoupack->GetPackSize(solid[i]->GetPackLength());
		cout << "�䂤�p�b�N�ł�" << i << "�Ԗڂ̉ו���";
		if (packSize != 0) {
			cout << packSize << "�T�C�Y�ł�" << endl;
		}
		else {
			cout << "����܂���" << endl;
		}
	}
}