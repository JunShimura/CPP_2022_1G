﻿#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int STD_BMI = 22;		// 標準BMI
	double height;  // 身長 
	double weight; // 体重
	double bmi;     // BMI
	double stdWeight;	// 標準体重

	//　キー入力をheightに格納
	cout << "身長(cm)を入力してください";
	cin >> height;
	//　キー入力をweightに格納
	cout << "体重(kg)を入力してください";
	cin >> weight;

	// 身長をcm単位からｍ単位に変換する
	height /= 100;
	
	// 身長と体重からBMIを算出する
	bmi = weight / height / height;

	//　標準体重を計算する
	stdWeight = STD_BMI * height * height;

	// BMIを画面に表示する
	std::cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です。" << endl;

	// 標準体重を画面に表示する
	std::cout << "あなたの標準体重は" << fixed << setprecision(1) << stdWeight << "です。" << endl;
}
