#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  // HealthChecker�N���X�̃C���X�^���X�𐶐�����
  HealthChecker yamada("�R�c��Y", 170, 67.5);
  HealthChecker* aota;
  aota = &yamada;
 cout<<"�{���̖��O��"<<aota->getName();

  // BMI�̒l��\������
  cout << yamada.getName() << "�����BMI�́A" << yamada.getBmi() << "�ł��B" << endl;

  return 0;
}
