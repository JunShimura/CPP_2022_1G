#include <iostream>
using namespace std;
#include "Counter.h"

int main() {
  // 10�̃J�E���^�𐶐�����
  Counter cnt[10];

  // 3�Ԃ�2��A�b�v����
  cnt[3].upVal();
  cnt[3].upVal();

  // 5�Ԃ�4��A�b�v����
  cnt[5].upVal();
  cnt[5].upVal();
  cnt[5].upVal();
  cnt[5].upVal();

  // ���ꂼ��̒l����ʂɕ\������
  cout << "3�Ԃ̃J�E���^�̒l = " << cnt[3].getVal() << endl;
  cout << "5�Ԃ̃J�E���^�̒l = " << cnt[5].getVal() << endl;

  return 0;
}
