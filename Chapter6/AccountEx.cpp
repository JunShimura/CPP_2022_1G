#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
#include "AccountEx.h"

// �������`�l��Ԃ������o�֐��̎���
string AccountEx::getName() {
  return this->name;
}

// �R���X�g���N�^�̎���
AccountEx::AccountEx(string number, string name, int balance) 
  : Account(number, balance) {
  this->name = name;
}
