#include <iostream>
#include <string>
using namespace std;

// ������\���N���X�̒�`
class Animal {
  protected:
    string name;		// ���O��ێ����郁���o�ϐ�
  public:
    virtual void speak();	// ���O�Ɩ�����\�����郁���o�֐�
    Animal(string name);	// �R���X�g���N�^
};
void Animal::speak() {
    cout << this->name << "�FHelloWorld" << endl;
}


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

// Animal�N���X�̃|�C���^�������Ƃ���sub�֐�
void sub(Animal *p) {
  p->speak();
}

// sub�֐����g��main�֐�
int main() {
  // ���ƔL�̃C���X�^���X�𐶐�����
  Dog pochi("�|�`");
  Dog jhon("�����");
  Cat tama("�^�}");
  Cat tom("�Ƃ�");
  Animal shimura("���ނ�");

  // ���ƔL�������
  sub(&pochi);
  sub(&tama);

  // �܂Ƃ߂ď�������
  Animal* animals[] = { &pochi,&tama,&jhon,&tom,&shimura };
  for (int i = 0; i < _countof(animals); i++) {
      animals[i]->speak();
  }


  return 0;
}
