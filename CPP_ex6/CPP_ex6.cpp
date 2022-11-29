// CPP_ex6.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
#include <iostream>
using namespace std;
#include "Box.h"


int main()
{
	Box testBox = { 2,10,30 };
	cout << "体積は" << testBox.GetVolume() << endl;
	cout << "表面積は" << testBox.GetSurface() << endl;

	const int BoxCount = 3;
	Box* boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		int x, y, z;
		cout << "幅を入力：";
		cin >> x;
		cout << "高さを入力：";
		cin >> y;
		cout << "奥行を入力：";
		cin >> z;
		boxes[i] = new Box(x, y, z);
		cout << "体積は" << boxes[i]->GetVolume() << endl;
		cout << "表面積は" << boxes[i]->GetSurface() << endl;
	}
	return 0;
}