#include <iostream>
using namespace std;

// PtrClass�N���X�̒�`�Ǝ���
class PtrClass {
  public:
    int *ptr;	// �|�C���^�̃����o�ϐ�

    // �R���X�g���N�^
    PtrClass() {
      cout << "�R���X�g���N�^���Ăяo����܂����B" << endl;
      this->ptr = new int[3];
    }

    // �f�X�g���N�^
    ~PtrClass() {
      cout << "�f�X�g���N�^���Ăяo����܂����B" << endl;
      delete[] ptr;
    }
};

// main�֐�
int main() {
  // PtrClass�N���X�̃I�u�W�F�N�gobj1�𐶐�����
  PtrClass obj1;
  obj1.ptr[0] = 123;
  obj1.ptr[1] = 456;
  obj1.ptr[2] = 789;

  // PtrClass�N���X�̃I�u�W�F�N�gobj2�𐶐�����
  PtrClass obj2;
  obj2.ptr[0] = 111;
  obj2.ptr[1] = 222;
  obj2.ptr[2] = 333;
  cout << "----------------------------------------" << endl;
  cout << "obj2�̃����o�ϐ�ptr�̒l�i����O�j�F" << obj2.ptr << endl;
  cout << "obj2.ptr[0]�̒l�F" << obj2.ptr[0] << endl;
  cout << "obj2.ptr[1]�̒l�F" << obj2.ptr[1] << endl;
  cout << "obj2.ptr[2]�̒l�F" << obj2.ptr[2] << endl;

  // obj2��obj1��������
  obj2 = obj1;

  // �����o�ϐ�ptr�̒l��ptr���w�������Ă���z��̗v�f�̒l��\������
  cout << "----------------------------------------" << endl;
  cout << "obj1�̃����o�ϐ�ptr�̒l�F" << obj1.ptr << endl;
  cout << "obj1.ptr[0]�̒l�F" << obj1.ptr[0] << endl;
  cout << "obj1.ptr[1]�̒l�F" << obj1.ptr[1] << endl;
  cout << "obj1.ptr[2]�̒l�F" << obj1.ptr[2] << endl;
  cout << "----------------------------------------" << endl;
  cout << "obj2�̃����o�ϐ�ptr�̒l�i�����j�F" << obj2.ptr << endl;
  cout << "obj2.ptr[0]�̒l�F" << obj2.ptr[0] << endl;
  cout << "obj2.ptr[1]�̒l�F" << obj2.ptr[1] << endl;
  cout << "obj2.ptr[2]�̒l�F" << obj2.ptr[2] << endl;
  cout << "----------------------------------------" << endl;

  return 0;
}
