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
	if (bmi < 18.5) {// -1 bmi<18.5�̒�̏d
		obesity = -1;
	}
	else if (bmi < 25) {//0 18.5�ȏ�25�����̕��ʑ̏d
		obesity = 0;
	}
	else if (bmi < 30) {//1 25�ȏ�30�����̔얞(1�x�j
		obesity = 1;
	}
	else if (bmi < 35) {//2 30�ȏ�35�����̔얞(2�x�j
		obesity = 2;
	}
	else if (bmi < 40) {//3 35�ȏ�40�����̔얞(3�x�j
		obesity = 3;
	}
	else {//4 40�ȏ�3�̔얞(4�x
		obesity = 4;
	}
	return obesity;
	*/
}