#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
#include "AccountEx.h"

int main() {
	// 新たな口座を開設する
	//AccountEx act = AccountEx("12345678", "山田一郎", 10000);
	AccountEx act("12345678", "山田一郎", 10000);

	// 口座番号、口座名義人、残高を表示する
	cout << "口座番号：" << act.getNumber();
	cout << ", 口座名義人：" << act.getName();
	cout << ", 残高：" << act.getBalance() << endl;

	return 0;
}
