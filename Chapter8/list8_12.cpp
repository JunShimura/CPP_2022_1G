#include <iostream>
using namespace std;

int main() {
  cout << "���a10�̉~�̖ʐρF" << getCircleArea(10) << endl;

  return 0;
}

double getCircleArea(double r) {
  return r * r * 3.14;
}
