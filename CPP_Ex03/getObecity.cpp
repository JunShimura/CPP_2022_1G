#include<stdlib.h>
#include"getObesity.h"
int getObesity(double bmi) {
	int obesity;
	const double judgeValue[] = { 18.5,25,30,35,40 };
	for (obesity=0; obesity < _countof(judgeValue); obesity++) {
		if (bmi < judgeValue[obesity]) {
			break;
		}
	}
	return obesity - 1;
	/*
	if (bmi < 18.5) {// -1 bmi<18.5の低体重
		obesity = -1;
	}
	else if (bmi < 25) {//0 18.5以上25未満の普通体重
		obesity = 0;
	}
	else if (bmi < 30) {//1 25以上30未満の肥満(1度）
		obesity = 1;
	}
	else if (bmi < 35) {//2 30以上35未満の肥満(2度）
		obesity = 2;
	}
	else if (bmi < 40) {//3 35以上40未満の肥満(3度）
		obesity = 3;
	}
	else {//4 40以上3の肥満(4度
		obesity = 4;
	}
	return obesity;
	*/
}