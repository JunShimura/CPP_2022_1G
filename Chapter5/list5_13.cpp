#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"
HealthChecker* player1;
HealthChecker* player2;
HealthChecker* player3;
HealthChecker* player4;

int main() {
  // �I�u�W�F�N�g�𓮓I�ɐ�������
  HealthChecker *ptr = new HealthChecker ("�R�c��Y", 170, 67.5);
  player1= new HealthChecker("�����䂤���낤", 170, 67.5);
  player2= new HealthChecker("���ނ炶���", 170, 67.5);
  HealthChecker temp= HealthChecker("�R�c���Y", 170, 67.5);	//new���g��Ȃ��̂�delete�s��
  // ������BMI��\������
  cout << ptr->getName() << "�����BMI�́A" << ptr->getBmi() << "�ł��B" << endl;
  int i = 0;
  while (true) {
	  if (i++ > 100) {
		  break;
	  }
	  if (i == 10) {
		  player3 = new HealthChecker("���ނ�", 170, 67.5);
		  player4 = new HealthChecker("�Ȃ��Ƃ�", 170, 67.5);
	  }
	  
	  if (i == 20) {
		  cout << "player3���|�ꂽ";
		  delete(player3);
	  }
	  if (i == 80) {
		  cout << "player4���|�ꂽ";
		  delete(player4);
	  }
	  cout << "�퓬����";
  }

  // �I�u�W�F�N�g�𓮓I�ɔj������
  //delete &temp;
  delete ptr;

  return 0;
}
