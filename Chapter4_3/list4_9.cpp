#include <iostream>
using namespace std;

// �������|�C���^�n���Ŏ󂯎��֐�
void sub(int *ptr) {
  // �����ɓn���ꂽ�A�h���X��\������
  cout << "sub�֐��F����ptr�ɓn���ꂽ�A�h���X = " << ptr << endl;

  // �����ɓn���ꂽ�A�h���X���w�������ϐ��̒l��ǂݏo���ĕ\������
  cout << "sub�֐��F����ptr���w�������ϐ��̒l = " << *ptr << endl;

  // �����ɓn���ꂽ�A�h���X���w�������ϐ��ɒl����������
  *ptr = 456;
  cout << "sub�֐��F����ptr���w�������ϐ��ɏ������񂾒l = " << *ptr << endl;

  // �߂�l��Ԃ����Ɋ֐����I������
  return;
}

// main�֐�
int main() {
  // ���[�J���ϐ���錾���A�l����������
  int val = 123;

  // ���[�J���ϐ��̃A�h���X��\������
  cout << "main�֐��F�ϐ�val�̃A�h���X = " << &val << endl;

  // ���[�J���ϐ��̒l��\������
  cout << "main�֐��F�ϐ�val�̒l = " << val << endl;

  // �����̃|�C���^�n���ŁAsub�֐����Ăяo��
  sub(&val);

  // ���[�J���ϐ��̒l��\������
  cout << "main�֐��F�ϐ�val�̒l = " << val << endl;

  return 0;
}
