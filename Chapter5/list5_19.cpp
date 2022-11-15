#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  // 標準BMIを表示する
  cout << "標準BMIは、" << HealthChecker::getStdBmi() << "です。" << endl;

  // 山田さんのインスタンスを生成する
  HealthChecker yamada("山田一郎", 170, 67.5);

  // 氏名とBMIを表示する
  cout << yamada.getName() << "さんのBMIは、" << yamada.getBmi() << "です。" << endl;

  // 標準体重を表示する
  cout << "標準体重は、" << yamada.getStdWeight() << "です。" << endl;

  return 0;
}
