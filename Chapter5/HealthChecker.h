class HealthChecker {
  private:
    static const int STD_BMI;		// �W��BMI��\�������o�萔
    string name;			// �������i�[���郁���o�ϐ�
    double height;			// �g�����i�[���郁���o�ϐ�
    double weight;			// �̏d���i�[���郁���o�ϐ�
    double bmi;				// BMI���i�[���郁���o�ϐ�
  public:
    static int getStdBmi();		// �W��BMI��Ԃ������o�֐�
    double getStdWeight();		// �W���̏d��Ԃ������o�֐�
    double getBmi();			// BMI��Ԃ������o�֐�
    string getName();			// ������Ԃ������o�֐�
    HealthChecker(string name, double height, double weight); // �R���X�g���N�^
};
