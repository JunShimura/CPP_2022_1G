#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
#include "AccountEx.h"

int main() {
  // �V���Ȍ������J�݂���
  AccountEx act("12345678", "�R�c��Y", 10000);

  // �����ԍ��A�������`�l�A�c����\������
  cout << "�����ԍ��F" << act.getNumber();
  cout << ", �������`�l�F" << act.getName();
  cout << ", �c���F" << act.getBalance() << endl;

  return 0;
}
