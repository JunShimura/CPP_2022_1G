#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
  const int DATA_NUM = 10;	// 配列の要素数

  // 10人の学生のテストの得点を格納した配列
  int point[DATA_NUM] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
  double average;		// 平均値

  // 平均点を求める
  average = getAverage(point, DATA_NUM);

  // 平均点を表示する
  cout << "平均点：" << average << endl;

  return 0;
}
