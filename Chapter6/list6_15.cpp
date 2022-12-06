#include <iostream>
#include <string>
using namespace std;

// ����\���N���X�̒�`
class Dog {
  private:
    string name;	// ���O��ێ����郁���o�ϐ�
  public:
    void speak();	// ���O�Ɩ�����\�����郁���o�֐�
    Dog(string name);	// �R���X�g���N�^
};

// �L��\���N���X�̒�`
class Cat {
  private:
    string name;	// ���O��ێ����郁���o�ϐ�
  public:
    void speak();	// ���O�Ɩ�����\�����郁���o�֐�
    Cat(string name);	// �R���X�g���N�^
};

// ����\���N���X�̖��O�Ɩ�����\�����郁���o�֐��̎���
void Dog::speak() {
  cout << this->name << "�F�����I" << endl;
}

// ����\���N���X�̃R���X�g���N�^�̎���
Dog::Dog(string name) {
  this->name = name;
}

// �L��\���N���X�̖�����\�����郁���o�֐��̎���
void Cat::speak() {
  cout << this->name << "�F�j�����I" << endl;
}

// �L��\���N���X�̃R���X�g���N�^�̎���
Cat::Cat(string name) {
  this->name = name;
}

// ���ƔL��\���N���X���g���v���O����
int main() {
  // ���ƔL�̃C���X�^���X�𐶐�����
  Dog pochi("�|�`");
  Cat tama("�^�}");

  // ���ƔL�������
  pochi.speak();
  tama.speak();

  return 0;
}
