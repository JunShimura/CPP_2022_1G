#include "Counter.h"

// �J�E���^�̒l��0�ɂ��郁���o�֐�
void Counter::resetVal() {
  this->val = 0;
}

// �J�E���^�̒l���A�b�v���郁���o�֐�
void Counter::upVal() {
  this->val++;
}

// �J�E���^�̒l��Ԃ������o�֐�
int Counter::getVal() {
  return this->val;
}

// �R���X�g���N�^
Counter::Counter() {
  this->resetVal();
}
