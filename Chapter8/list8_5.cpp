#include <iostream>
using namespace std;

// MyClass�N���X�̒�`�Ǝ���
class MyClass {
  private:
    int data;	// �����o�ϐ�
  public:
    // �����o�ϐ�data�̒l��Ԃ������o�֐�
    int getData() {
      return this->data;
    }

    // �R���X�g���N�^
    MyClass(int data) {
      cout << "�R���X�g���N�^���Ăяo����܂����B" << endl;
      this->data = data;
    }

    // �f�X�g���N�^
    ~MyClass() {
      cout << "�f�X�g���N�^���Ăяo����܂����B" << endl;
    }

    // �R�s�[�R���X�g���N�^
    MyClass(const MyClass &obj) {
      cout << "�R�s�[�R���X�g���N�^���Ăяo����܂����B" << endl;
      this->data = obj.data;
    }
};

// main�֐�
int main() {
  // MyClass�N���X�̃I�u�W�F�N�gobj1�𐶐�����
  MyClass obj1(123);
  cout << "obj1�̃����o�ϐ�data�̒l�F" << obj1.getData() << endl;
  cout << "----------------------------------------" << endl;

  // MyClass�N���X�̃I�u�W�F�N�gobj2�𐶐�����
  MyClass obj2(456);
  cout << "obj2�̃����o�ϐ�data�̒l�i����O�j�F" << obj2.getData() << endl;
  cout << "----------------------------------------" << endl;

  // obj2��obj1��������
  obj2 = obj1;
  cout << "obj2�̃����o�ϐ�data�̒l�i�����j�F" << obj2.getData() << endl;
  cout << "----------------------------------------" << endl;

  return 0;
}
