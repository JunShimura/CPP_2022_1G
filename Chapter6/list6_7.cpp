#include <iostream>
#include <string>
using namespace std;
#include "Account.h"

int main() {
  // �V���Ȍ������J�݂���
  Account act("12345678", 10000);

  // �����ԍ��Ǝc����\������
  cout << "�����ԍ��F" << act.getNumber();
  cout << ", �c�� " << act.getBalance() << endl;

  // �c�����X�V����
  act.setBalance(30000);

  // �����ԍ��Ǝc����\������
  cout << "�����ԍ��F" << act.getNumber();
  cout << ", �c�� " << act.getBalance() << endl;

  // �}�C�i�X�̒l�Ŏc�����X�V����
  act.setBalance(-20000);

  // �����ԍ��Ǝc����\������
  cout << "�����ԍ��F" << act.getNumber();
  cout << ", �c�� " << act.getBalance() << endl;

  return 0;
}
