#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"
HealthChecker* player1;
HealthChecker* player2;
HealthChecker* player3;
HealthChecker* player4;

int main() {
  // オブジェクトを動的に生成する
  HealthChecker *ptr = new HealthChecker ("山田一郎", 170, 67.5);
  player1= new HealthChecker("せきゆうたろう", 170, 67.5);
  player2= new HealthChecker("しむらじゅん", 170, 67.5);
  HealthChecker temp= HealthChecker("山田次郎", 170, 67.5);	//newを使わないのでdelete不可
  // 氏名とBMIを表示する
  cout << ptr->getName() << "さんのBMIは、" << ptr->getBmi() << "です。" << endl;
  int i = 0;
  while (true) {
	  if (i++ > 100) {
		  break;
	  }
	  if (i == 10) {
		  player3 = new HealthChecker("きむら", 170, 67.5);
		  player4 = new HealthChecker("ないとう", 170, 67.5);
	  }
	  
	  if (i == 20) {
		  cout << "player3が倒れた";
		  delete(player3);
	  }
	  if (i == 80) {
		  cout << "player4が倒れた";
		  delete(player4);
	  }
	  cout << "戦闘した";
  }

  // オブジェクトを動的に破棄する
  //delete &temp;
  delete ptr;

  return 0;
}
