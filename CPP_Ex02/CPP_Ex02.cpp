﻿#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int DATA_NUM = 10;	// 配列の要素数

	// 10人の学生のテストの得点を格納した配列
	int point[] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
	int i, j;			// 配列の要素番号（ループカウンタ）
	char grade;			// 成績の評価
	// ソート処理
	/*　自分のコード
	for (i = 0; i < DATA_NUM - 1; i++) {
		for (j = i+1; j < DATA_NUM; j++) {
			if (point[i] < point[j])
			{
				int t = point[i];
				point[i] = point[j];
				point[j] = t;
			}
		}
	}
	*/
	//sort(point,point+ (sizeof(point) / sizeof(point[0])));
	//reverse(point, point + (sizeof(point) / sizeof(point[0])));
	sort(std::begin(point), std::end(point), std::greater<>());

	for (i = 0; i < DATA_NUM; i++) {
		if (point[i] >= 83) {
			grade = 'A';
		}
		else if (point[i] >= 66) {
			grade = 'B';
		}
		else if (point[i] >= 50) {
			grade = 'C';
		}
		else {
			grade = 'D';
		}
		cout << point[i] << "=" << grade << endl;
	}

	return 0;
}