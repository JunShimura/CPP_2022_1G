#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  // �W��BMI��\������
  cout << "�W��BMI�́A" << HealthChecker::getStdBmi() << "�ł��B" << endl;

  // �R�c����̃C���X�^���X�𐶐�����
  HealthChecker yamada("�R�c��Y", 170, 67.5);

  // ������BMI��\������
  cout << yamada.getName() << "�����BMI�́A" << yamada.getBmi() << "�ł��B" << endl;

  // �W���̏d��\������
  cout << "�W���̏d�́A" << yamada.getStdWeight() << "�ł��B" << endl;

  return 0;
}
