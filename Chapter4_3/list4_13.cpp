#include <iostream>
using namespace std;

// �������Q�Ɠn���Ŏ󂯎��֐�
void sub(int& ref) {
  ref = 456;
  return;
}

// main�֐�
int main() {
  int val = 123;
  cout << "sub�֐����Ăяo���O��val�̒l = " << val << endl;
  sub(val);
  cout << " sub�֐����Ăяo�������val�̒l = " << val << endl;
  return 0;
}
