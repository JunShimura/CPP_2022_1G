#include <iostream>
using namespace std;

// 10�̃J�E���^�̒l
int counterVal[10];

// �����Ŏw�肳�ꂽ�J�E���^�̒l��0�ɂ���֐�
void resetCounterVal(int num) {
  counterVal[num] = 0;
}

// �����Ŏw�肳�ꂽ�J�E���^�̒l���A�b�v����֐�
void upCounterVal(int num) {
  counterVal[num]++;
}

// main�֐�
int main() {
  // 3�Ԃ�5�Ԃ̃J�E���^�����Z�b�g����
  resetCounterVal(3);
  resetCounterVal(5);

  // 3�Ԃ�2��A�b�v����
  upCounterVal(3);
  upCounterVal(3);

  // 5�Ԃ�4��A�b�v����
  upCounterVal(5);
  upCounterVal(5);
  upCounterVal(5);
  upCounterVal(5);

  // ���ꂼ��̒l����ʂɕ\������
  cout << "3�Ԃ̃J�E���^�̒l = " << counterVal[3] << endl;
  cout << "5�Ԃ̃J�E���^�̒l = " << counterVal[5] << endl;

  return 0;
}
