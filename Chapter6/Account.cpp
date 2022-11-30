#include <iostream>
#include <string>
using namespace std;
#include "Account.h"

// �����ԍ���Ԃ������o�֐��̎���
string Account::getNumber() {
  return this->number;
}

// �c����Ԃ������o�֐��̎���
int Account::getBalance() {
  return this->balance;
}

// �c����ݒ肷�郁���o�֐��̎���
void Account::setBalance(int balance) {
  if (balance >= 0) {
    this->balance = balance;
  }
}

// �R���X�g���N�^�̎���
Account::Account(string number, int balance) {
  this->number = number;
  this->balance = balance;
}
