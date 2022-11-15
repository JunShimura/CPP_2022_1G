#include <iostream>
#include <string>
using namespace std;
#include "HealthChecker.h"

// �W��BMI��\�������o�萔�̎���
const int HealthChecker::STD_BMI = 22;

// BMI��Ԃ������o�֐��̎���
double HealthChecker::getBmi() {
  // �܂�BMI���v�Z����Ă��Ȃ�������v�Z����
  if (this->bmi == 0) {
    double mHeight = this->height / 100;
    this->bmi = this->weight / mHeight / mHeight;
  }

  // BMI��Ԃ�
  return this->bmi;
}

// �R���X�g���N�^�̎���
HealthChecker::HealthChecker(string name, double height, double weight) {
  // �����o�ϐ��ɏ����l��ݒ肷��
  this->name = name;
  this->height = height;
  this->weight = weight;
  this->bmi = 0;
}

// ������Ԃ������o�֐��̎���
string HealthChecker::getName() {
  return this->name;
}

// �W��BMI��Ԃ������o�֐��̎���
int HealthChecker::getStdBmi() {
  return HealthChecker::STD_BMI;
}

// �W���̏d��Ԃ������o�֐��̎���
double HealthChecker::getStdWeight() {
  double mHeight = this->height / 100;
  return HealthChecker::STD_BMI * mHeight * mHeight;
}
