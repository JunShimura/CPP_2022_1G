double getAverage(const int *a, int length) {
  double sum;		// ���v�l
  double average;	// ���ϒl
  int i;		// �z��̗v�f�ԍ��i���[�v�J�E���^�j

  // �z��̍��v�l�����߂�
  sum = 0;
  for (i = 0; i < length; i++) {
    // �|�C���^���w�������Ă���v�f�̒l��ǂݏo���W�v����
    sum += *a;

    // �|�C���^���X�V����i���̗v�f���w�������j
    a++;
  }

  // �z��̕��ϒl�����߂�
  average = (double)sum / length;

  // �z��̍��v�l��Ԃ�
  return average;
}
