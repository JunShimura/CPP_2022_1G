#include <iostream>
#include <string>
using namespace std;

int main() {
  int ans;	// ������̒���
  string s;	// ������I�u�W�F�N�g
  char str[] = "hello, world";

  // ������I�u�W�F�N�g�ɕ�������i�[����
  s = "hello, world";

  // ������̒��������߂�
  ans = s.length();

  // ������̒�����\������
  cout << ans << endl;

  return 0;
}
