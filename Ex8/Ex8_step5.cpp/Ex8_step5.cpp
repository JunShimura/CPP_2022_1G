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
	virtual double GetPackLength() = 0;
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

//int GetPackSize(double length, int packSizes[], int packSizesLength) {
//	int packSize = 0;
//	//����T�C�Y�����߂�
//	for (int i = 0; i < packSizesLength; i++) {
//		if (length <= packSizes[i]) {
//			packSize = packSizes[i];
//			break;
//		}
//	}
//	return packSize;
//}
//
//int GetKuronekoSize(double length) {
//	int packSizes[] = { 60,80,100,120,140,160,180,200 };
//	return GetPackSize(length, packSizes, _countof(packSizes));
//}
//int GetYupackSize(double length) {
//	int  packSizes[] = { 60,80,100,120,140,160,170 };
//	return GetPackSize(length, packSizes, _countof(packSizes));
//}

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
	const int N_TABLE = 4;
	Solid* solid[N_TABLE] = { &box, &cylinder,&cone,&sphere };
	for (int i = 0; i < N_TABLE; i++) {
		DisplayVolumeSurface(solid[i]);
		courierKuroneko->GetPackSize(solid[i]->GetPackLength());
	}
	double length;
	int packSize;
	// ���̑�}�ւ̃T�C�Y�����߂�
	length = box.GetPackLength();
	//�N���l�R�Ŕ��𑗂�
	packSize = courierKuroneko->GetPackSize(length);
	if (packSize != 0) {
		cout << "�N���l�R�ł̔��̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̔��̓N���l�R��}�ւł͑���܂���" << endl;
	}
	//�䂤�p�b�N�Ŕ��𑗂�
	packSize = courierYoupack->GetPackSize(length);
	if (packSize != 0) {
		cout << "�䂤�p�b�N�ł̔��̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̔��͂䂤�p�b�N��}�ւł͑���܂���" << endl;
	}

	// �~���̑�}�ւ̃T�C�Y�����߂�
	length = cylinder.GetPackLength();
	//�N���l�R�ŉ~���𑗂�
	packSize = courierKuroneko->GetPackSize(length);
	if (packSize != 0) {
		cout << "�N���l�R�ł̉~���̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̉~���̓N���l�R��}�ւł͑���܂���" << endl;
	}
	//�䂤�p�b�N�ŉ~���𑗂�
	packSize = courierYoupack->GetPackSize(length);
	if (packSize != 0) {
		cout << "�䂤�p�b�N�ł̉~���̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̉~���͂䂤�p�b�N��}�ւł͑���܂���" << endl;
	}

	// �~���̑�}�ւ̃T�C�Y�����߂�
	length = cone.GetPackLength();
	//�N���l�R�ŉ~���𑗂�
	packSize = courierKuroneko->GetPackSize(length);
	if (packSize != 0) {
		cout << "�N���l�R�ł̉~���̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̉~���̓N���l�R��}�ւł͑���܂���" << endl;
	}
	//�䂤�p�b�N�ŉ~���𑗂�
	packSize = courierYoupack->GetPackSize(length);
	if (packSize != 0) {
		cout << "�䂤�p�b�N�ł̉~���̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̉~���͂䂤�p�b�N��}�ւł͑���܂���" << endl;
	}

	// ���̑�}�ւ̃T�C�Y�����߂�
	length = sphere.GetPackLength();
	//�N���l�R�ŋ��𑗂�
	packSize = courierKuroneko->GetPackSize(length);
	if (packSize != 0) {
		cout << "�N���l�R�ł̋��̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̋��̓N���l�R��}�ւł͑���܂���" << endl;
	}
	//�䂤�p�b�N�Ŕ��𑗂�
	packSize = courierYoupack->GetPackSize(length);
	if (packSize != 0) {
		cout << "�䂤�p�b�N�ł̋��̃T�C�Y��" << packSize << "�T�C�Y�ł�" << endl;
	}
	else {
		cout << "���̋��͂䂤�p�b�N��}�ւł͑���܂���" << endl;
	}
}