#include <iostream>
#include <string>
using namespace std;
#include "Counter.h"
#include "CounterEx.h"

int main() {
  CounterEx cnt;
  cout << "�J�E���^�̒l = " << cnt.getVal() << endl;

  cnt.upVal();
  cnt.upVal();
  cnt.upVal();
  cout << "�J�E���^�̒l = " << cnt.getVal() << endl;

  cnt.downVal();
  cnt.downVal();
  cout << "�J�E���^�̒l = " << cnt.getVal() << endl;

  return 0;
}
