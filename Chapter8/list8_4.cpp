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

    // �R�s�[�R���X�g���N�^
    PtrClass(const PtrClass &obj) {
      cout << "�R�s�[�R���X�g���N�^���Ăяo����܂����B" << endl;
      this->ptr = new int[3];
      this->ptr[0] = obj.ptr[0];
      this->ptr[1] = obj.ptr[1];
      this->ptr[2] = obj.ptr[2];
    }
};

// main�֐�
int main() {
  // PtrClass�N���X�̃I�u�W�F�N�gobj1�𐶐�����
  PtrClass obj1;
  obj1.ptr[0] = 123;
  obj1.ptr[1] = 456;
  obj1.ptr[2] = 789;

  // obj1���R�s�[����obj2�𐶐�����
  PtrClass obj2 = obj1;

  // �����o�ϐ�ptr�̒l��ptr���w�������Ă���z��̗v�f�̒l��\������
  cout << "----------------------------------------" << endl;
  cout << "obj1�̃����o�ϐ�ptr�̒l�F" << obj1.ptr << endl;
  cout << "obj1.ptr[0]�̒l�F" << obj1.ptr[0] << endl;
  cout << "obj1.ptr[1]�̒l�F" << obj1.ptr[1] << endl;
  cout << "obj1.ptr[2]�̒l�F" << obj1.ptr[2] << endl;
  cout << "----------------------------------------" << endl;
  cout << "obj2�̃����o�ϐ�ptr�̒l�F" << obj2.ptr << endl;
  cout << "obj2.ptr[0]�̒l�F" << obj2.ptr[0] << endl;
  cout << "obj2.ptr[1]�̒l�F" << obj2.ptr[1] << endl;
  cout << "obj2.ptr[2]�̒l�F" << obj2.ptr[2] << endl;
  cout << "----------------------------------------" << endl;

  return 0;
}
