#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

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
		double depth) {//奥行
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
};

class Cylinder :public Solid {
private:
	double radius;  //底面の半径
	double height;  //高さ
public:
	Cylinder(double radius, double height) {
		this->radius = radius;
		this->height = height;
	}
	double GetVolume() {
		return radius * radius * M_PI * height;
	}
	virtual double GetSurface() {
		//return
		//	radius * radius * M_PI * 2	//天井と床
		//	+ 2 * radius * M_PI * height;	//側面
		return
			(radius + height) * radius * M_PI * 2;
	}
};

class Cone :public Solid {
private:
	double radius;  //底面の半径
	double height;  //高さ
public:
	Cone(double radius, double height) {
		this->radius = radius;
		this->height = height;
	}
	double GetVolume() {
		return radius * radius * M_PI * height/3.0;
	}
	virtual double GetSurface() {
		return
			M_PI * radius
			* (sqrt(radius * radius + height * height) + radius);
	}
};

class Sphere :public Solid {
private:
	double radius;  //底面の半径
public:
	Sphere(double radius) {
		this->radius = radius;
	}
	double GetVolume() {
		return radius * radius * radius * M_PI * 4.0 / 3.0;
	}
	virtual double GetSurface() {
		return	M_PI * radius * radius * 4.0;
	}
};

int main()
{
	Solid* solids[] =
	{
		new Box(3,5,2.5),
		new Cylinder( 3,7 ),
		new Cone( 3,7 ),
		new Sphere(5)
	};
	for (int i = 0; i < _countof(solids); i++) {
		cout << i << "番目の体積=" << solids[i]->GetVolume() << endl;
		cout << i << "番目の表面積=" << solids[i]->GetSurface() << endl;
	}
}