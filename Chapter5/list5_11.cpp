#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

int main() {
  const int DATA_NUM = 3;			// �z��̗v�f��
  // HealthChecker�N���X���f�[�^�^�Ƃ����z��
  HealthChecker people[DATA_NUM] = {
    HealthChecker("�R�c��Y", 170, 67.5),	// �R�c����
    HealthChecker("�����Ԏq", 160, 54.5),	// ��������
    HealthChecker("��؎��Y", 180, 85.5)	// ��؂���
  };

  // �z��̗v�f�����Ԃɏ�������
  for (int i = 0; i < DATA_NUM; i++) {
    // BMI��\������
    cout << people[i].getName() << "�����BMI�́A" << people[i].getBmi() << "�ł��B" << endl;
  }

  return 0;
}
