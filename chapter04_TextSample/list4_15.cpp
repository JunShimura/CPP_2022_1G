#include <iostream>
#include <string>
using namespace std;
#include "chapter4.h"

int main() {
  const int DATA_NUM = 3;		// �z��̗v�f��
  // HealthCheck�\���̂��f�[�^�^�Ƃ����z��
  HealthCheck people[DATA_NUM] = {
    { "�R�c��Y", 170, 67.5, 0 },	// �R�c����̏��
    { "�����Ԏq", 160, 54.5, 0 },	// ��������̏��
    { "��؎��Y", 180, 85.5, 0 }	// ��؂���̏��
  };
  double mHeight;	// m�P�ʂ̐g��
  int i;		// ���[�v�J�E���^

  // �z��̗v�f�����Ԃɏ�������
  for (i = 0; i < DATA_NUM; i++) {
    // BMI�����߂�
    mHeight = people[i].height / 100;
    people[i].bmi = people[i].weight / mHeight / mHeight;

    // BMI��\������
    cout << people[i].name << "�����BMI�́A" << people[i].bmi << "�ł��B" << endl;
  }

  return 0;
}
