#include <iostream>
using namespace std;
#include "chapter4.h"

int main() {
  const int DATA_NUM = 10;	// �z��̗v�f��

  // 10�l�̊w���̃e�X�g�̓��_���i�[�����z��
  int point[DATA_NUM] = { 85, 72, 63, 45, 100, 98, 52, 88, 74, 65 };
  double average;		// ���ϒl

  // ���ϓ_�����߂�
  average = getAverage(point, DATA_NUM);

  // ���ϓ_��\������
  cout << "���ϓ_�F" << average << endl;

  return 0;
}
