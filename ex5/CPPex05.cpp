#include <iostream>
using namespace std;

class Box {	//箱の定義
private:
	float width;	//幅
	float height;	//高さ
	float depth;	//奥行
public:
	Box(
		float width,		//幅
		float height,	//高さ
		float depth)	//奥行
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}
	float getVolume() {
		return this->width * this->height * this->depth;
	}
	float getSurface() {
		return (this->width * this->height + this->height * this->depth + this->depth * this->width) * 2;
	}
};

int main()
{
	Box testBox = { 2,10,30 };
	float x, y, z;
	cout << "幅を入力：";
	cin >> x;
	cout << "高さを入力：";
	cin >> y;
	cout << "奥行を入力：";
	cin >> z;
	Box* box = new Box(x, y, z);
	cout << "体積は" << box->getVolume() << endl;
	cout << "表面積は" << box->getSurface() << endl;
	return 0;
}