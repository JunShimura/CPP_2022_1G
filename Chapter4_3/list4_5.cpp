#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
  double height;	// 身長
  double weight;	// 体重
  double bmi;		// BMI

  // キー入力をheightに格納する
  cout << "身長（cm）を入力してください：";
  cin >> height;

  // キー入力をweightに格納する
  cout << "体重（kg）を入力してください：";
  cin >> weight;

  // 身長と体重からBMIを計算する
  bmi = getBmi(height, weight);

  // BMIを画面に表示する
  cout << "あなたのBMIは、" << bmi << "です。" << endl;

  return 0;
}
