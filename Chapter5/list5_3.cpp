#include <iostream>
#include <string>
using namespace std;

int main() {
  // ������I�u�W�F�N�g
  string s1, s2, s3;

  // ������I�u�W�F�N�g�ɕ�������i�[����
  s1 = "apple";
  s2 = "banana";

  // ��������r����
  if (s1 > s2) {
    cout << "�傫���B" << endl;
  }
  else if (s1 < s2) {
    cout << "�������B" << endl;
  }
  else {
    cout << "�������B" << endl;
  }

  // �������A������
  s3 = s1 + s2;
  cout << s3 << endl;

  // ���������߂�
  cout << s3.length() << endl;

  // 5�Ԗڂ���3�����̕�������������o��
  cout << s3.substr(5, 3) << endl;

  // 5�����ڂ��������o��
  cout << s3[5] << endl;

  // "na" �Ƃ����������������
  cout << s3.find("na") << endl;

  // ���������ɂ���
  s3.clear();

  // �����񂪋�ł��邱�Ƃ��m�F����
  if (s3.empty()) {
    cout << "��ł��B" << endl;
  }
  else {
    cout << "��ł͂���܂���B" << endl;
  }

  return 0;
}
