#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  const int DATA_NUM = 3;			// 配列の要素数
  // HealthCheckerクラスをデータ型とした配列
  HealthChecker people[DATA_NUM] = {
    HealthChecker("山田一郎", 170, 67.5),	// 山田さん
    HealthChecker("佐藤花子", 160, 54.5),	// 佐藤さん
    HealthChecker("鈴木次郎", 180, 85.5)	// 鈴木さん
  };

  // 配列の要素を順番に処理する
  for (int i = 0; i < DATA_NUM; i++) {
    // BMIを表示する
    cout << people[i].getName() << "さんのBMIは、" << people[i].getBmi() << "です。" << endl;
  }

  return 0;
}
