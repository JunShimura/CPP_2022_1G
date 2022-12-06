#include <iostream>
#include <string>
using namespace std;
#include "Counter.h"

// Counter�N���X���W�񂵂�GenderCountBoard�N���X�̒�`
class GenderCountBoard {
  private:
    Counter male;		// �j���p�J�E���^��\�������o�I�u�W�F�N�g
    Counter female;		// �����p�J�E���^��\�������o�I�u�W�F�N�g
  public:
    void upMaleCounter();	// �j���p�J�E���^���A�b�v���郁���o�֐�
    void upFemaleCounter();	// �����p�J�E���^���A�b�v���郁���o�֐�
    int getMaleCounter();	// �j���p�J�E���^�̒l��Ԃ������o�֐�
    int getFemaleCounter();	// �����p�J�E���^�̒l��Ԃ������o�֐�
    GenderCountBoard();	// �R���X�g���N�^
};

// �j���p�J�E���^���A�b�v���郁���o�֐��̎���
void GenderCountBoard::upMaleCounter() {
  this->male.upVal();
}

// �����p�J�E���^���A�b�v���郁���o�֐��̎���
void GenderCountBoard::upFemaleCounter() {
  this->female.upVal();
}

// �j���p�J�E���^�̒l��Ԃ������o�֐��̎���
int GenderCountBoard::getMaleCounter() {
  return this->male.getVal();
}

// �����p�J�E���^�̒l��Ԃ������o�֐��̎���
int GenderCountBoard::getFemaleCounter() {
  return this->female.getVal();
}

// �R���X�g���N�^�̎���
GenderCountBoard::GenderCountBoard() {
}

// GenderCountBoard�N���X���g���v���O����
int main() {
  // GenderCountBoard�N���X�̃C���X�^���X�𐶐�����
  GenderCountBoard gcb;

  // �j���p�J�E���^��2��A�b�v����
  gcb.upMaleCounter();
  gcb.upMaleCounter();

  // �����p�J�E���^��3��A�b�v����
  gcb.upFemaleCounter();
  gcb.upFemaleCounter();
  gcb.upFemaleCounter();

  // �J�E���^�̒l��\������
  cout << "�j���p�J�E���^�̒l = " << gcb.getMaleCounter() << endl;
  cout << "�����p�J�E���^�̒l = " << gcb.getFemaleCounter() << endl;

  return 0;
}
