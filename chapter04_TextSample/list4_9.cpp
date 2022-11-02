#include <iostream>
using namespace std;

// 引数をポインタ渡しで受け取る関数
void sub(int *ptr) {
  // 引数に渡されたアドレスを表示する
  cout << "sub関数：引数ptrに渡されたアドレス = " << ptr << endl;

  // 引数に渡されたアドレスが指し示す変数の値を読み出して表示する
  cout << "sub関数：引数ptrが指し示す変数の値 = " << *ptr << endl;

  // 引数に渡されたアドレスが指し示す変数に値を書き込む
  *ptr = 456;
  cout << "sub関数：引数ptrが指し示す変数に書き込んだ値 = " << *ptr << endl;

  // 戻り値を返さずに関数を終了する
  return;
}

// main関数
int main() {
  // ローカル変数を宣言し、値を書き込む
  int val = 123;

  // ローカル変数のアドレスを表示する
  cout << "main関数：変数valのアドレス = " << &val << endl;

  // ローカル変数の値を表示する
  cout << "main関数：変数valの値 = " << val << endl;

  // 引数のポインタ渡しで、sub関数を呼び出す
  sub(&val);

  // ローカル変数の値を表示する
  cout << "main関数：変数valの値 = " << val << endl;

  return 0;
}
