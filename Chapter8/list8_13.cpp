#include <iostream>
using namespace std;

double getCircleArea(double r);

int main() {
  cout << "”¼Œa10‚Ì‰~‚Ì–ÊÏF" << getCircleArea(10) << endl;

  return 0;
}

double getCircleArea(double r) {
  return r * r * 3.14;
}
