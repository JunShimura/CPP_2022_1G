class Account {
  protected:
    string number;	// �����ԍ���\�������o�ϐ�
    int balance;	// �c����\�������o�ϐ�
  public:
    string getNumber();			 // �����ԍ���Ԃ������o�֐�
    int getBalance();			 // �c����Ԃ������o�֐�
    void setBalance(int balance);	 // �c����ݒ肷�郁���o�֐�
    Account(string number, int balance); // �R���X�g���N�^
};
