#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  // HealthChecker�N���X�̃C���X�^���X�𐶐�����
  HealthChecker yamada("�R�c��Y", 170, 67.5);

  // BMI�̒l��\������
  cout << "BMI�́A" << yamada.getBmi() << "�ł��B" << endl;

  return 0;
}
