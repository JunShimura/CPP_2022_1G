#include <iostream>
#include <string>
using namespace std;

// ConstDest�N���X�̒�`
class ConstDest {
  private:
    string name;		// �C���X�^���X�����ʂ��閼�O
  public:
    ConstDest(string name);	// �R���X�g���N�^
    ~ConstDest();		// �f�X�g���N�^
};

// ConstDest�N���X�̃R���X�g���N�^�̎���
ConstDest::ConstDest(string name) {
  cout << name << "�̃R���X�g���N�^���Ăяo����܂����B" << endl;
  this->name = name;
}

// ConstDest�N���X�̃f�X�g���N�^�̎���
ConstDest::~ConstDest() {
  cout << this->name << "�̃f�X�g���N�^���Ăяo����܂����B" << endl;
}

// �O���[�o���I�u�W�F�N�g��錾����
ConstDest globalObj("�O���[�o���I�u�W�F�N�g");

// sub�֐�
void sub() {
  cout << "sub�֐����Ăяo����܂����B" << endl;

  // ���[�J���I�u�W�F�N�g��錾����
  ConstDest localObj("���[�J���I�u�W�F�N�g");

  cout << "sub�֐����I�����܂��B" << endl;
  return;
}

// main�֐�
int main() {
  cout << "main�֐����Ăяo����܂����B" << endl;

  // sub�֐����Ăяo���i1��ځj
  sub();

  // sub�֐����Ăяo���i2��ځj
  sub();

  cout << "main�֐����I�����܂��B" << endl;
  return 0;
}
