#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  // �I�u�W�F�N�g�𓮓I�ɐ�������
  HealthChecker *ptr = new HealthChecker ("�R�c��Y", 170, 67.5);

  // ������BMI��\������
  cout << ptr->getName() << "�����BMI�́A" << ptr->getBmi() << "�ł��B" << endl;

  // �I�u�W�F�N�g�𓮓I�ɔj������
  delete ptr;

  return 0;
}
