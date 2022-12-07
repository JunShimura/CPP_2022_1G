#include <iostream>
using namespace std;

class Box {	//���̒�`
private:
	float width;	//��
	float height;	//����
	float depth;	//���s
public:
	Box(
		float width,		//��
		float height,	//����
		float depth)	//���s
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
	cout << "������́F";
	cin >> x;
	cout << "��������́F";
	cin >> y;
	cout << "���s����́F";
	cin >> z;
	Box* box = new Box(x, y, z);
	cout << "�̐ς�" << box->getVolume() << endl;
	cout << "�\�ʐς�" << box->getSurface() << endl;
	return 0;
}