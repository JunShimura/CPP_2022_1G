#include <iostream>
using namespace std;

class MyCircle {
  private:
    double r;
  public:
    MyCircle(double r) {
      this->r = r;
    }

    double getArea() {
      return this->r * this->r * 3.14;
    }
};

int main() {
  MyCircle obj(10);
  cout << "���a10�̉~�̖ʐρF" << obj.getArea() << endl;

  return 0;
}
