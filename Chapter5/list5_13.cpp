#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  // オブジェクトを動的に生成する
  HealthChecker *ptr = new HealthChecker ("山田一郎", 170, 67.5);

  // 氏名とBMIを表示する
  cout << ptr->getName() << "さんのBMIは、" << ptr->getBmi() << "です。" << endl;

  // オブジェクトを動的に破棄する
  delete ptr;

  return 0;
}
