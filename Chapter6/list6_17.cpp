#include <iostream>
#include <string>
using namespace std;

// ������\���N���X�̒�`
class Animal {
  protected:
    string name;		// ���O��ێ����郁���o�ϐ�
  public:
    virtual void speak() = 0;	// ���O�Ɩ�����\�����郁���o�֐�
    Animal(string name);	// �R���X�g���N�^
};

// ����\���N���X�̒�`
class Dog : public Animal {
  public:
    void speak();	// ���O�Ɩ�����\�����郁���o�֐�
    Dog(string name);	// �R���X�g���N�^
};

// �L��\���N���X�̒�`
class Cat : public Animal {
  public:
    void speak();	// ���O�Ɩ�����\�����郁���o�֐�
    Cat(string name);	// �R���X�g���N�^
};

// ������\���N���X�̃R���X�g���N�^�̎���
Animal::Animal(string name) {
  this->name = name;
}

// ����\���N���X�̖��O�Ɩ�����\�����郁���o�֐��̎���
void Dog::speak() {
  cout << this->name << "�F�����I" << endl;
}

// ����\���N���X�̃R���X�g���N�^�̎���
Dog::Dog(string name) : Animal(name) {
}

// �L��\���N���X�̖�����\�����郁���o�֐��̎���
void Cat::speak() {
  cout << this->name << "�F�j�����I" << endl;
}

// �L��\���N���X�̃R���X�g���N�^�̎���
Cat::Cat(string name) : Animal(name) {
}

// main�֐�
int main() {
  const int DATA_NUM = 5;	// �z��̗v�f��
  Animal *p[DATA_NUM];		// ���ۃN���X�̃|�C���^�̔z��

  // �z���Dog�N���X��Cat�N���X�̃C���X�^���X���i�[����
  p[0] = new Dog("�|�`");
  p[1] = new Cat("�^�}");
  p[2] = new Dog("�V��");
  p[3] = new Cat("�~�P");
  p[4] = new Dog("�N��");

  // ���������Ԃɖ�����
  for (int i = 0; i < DATA_NUM; i++) {
    p[i]->speak();
    delete p[i];
  }

  return 0;
}
