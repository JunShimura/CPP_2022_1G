class AccountEx : public Account {
  protected:
    string name;	// �������`�l�����������o�ϐ�
  public:
    string getName();	// �������`�l��Ԃ������o�֐�
    // �R���X�g���N�^
    AccountEx(string number, string name, int balance);
};
