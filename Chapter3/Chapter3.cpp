#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int STD_BMI = 22;		// 標準BMI
	const double THIN_BMI = 18.5;	// 痩せすぎBMI
	const double FAT1_BMI = 25;		// 肥満度1
	const double FAT2_BMI = 30;		// 肥満度2
	const double FAT3_BMI = 35;		// 肥満度3
	const double FAT4_BMI = 40;		// 肥満度4

	const int meterPerCenti = 100;	//1mで何㎝か
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
	height /= meterPerCenti;

	// 身長と体重からBMIを算出する
	bmi = weight / height / height;

	//　標準体重を計算する
	stdWeight = STD_BMI * height * height;

	// BMIを画面に表示する
	std::cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "です。" << endl;

	// 肥満かどうかを判定した結果を表示する
	if (bmi < THIN_BMI) {
		cout << "低体重です" << endl;
	}
	else if ( bmi < FAT1_BMI) {
		cout << "普通体重です" << endl;
	}
	else if (bmi < FAT2_BMI) {
		cout << "肥満度1です" << endl;
	}
	else if (bmi < FAT3_BMI) {
		cout << "肥満度2です" << endl;
	}
	else if (bmi < FAT4_BMI) {
		cout << "肥満度3です" << endl;
	}
	else {
		cout << "肥満度4です" << endl;
	}
	
	// 標準体重を画面に表示する
	std::cout << "あなたの標準体重は" << fixed << setprecision(1) << stdWeight << "です。" << endl;
}
