#pragma once
class Box {
private:
	double width;	//��
	double height;	//����
	double depth;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double packSize; //������}�փT�C�Y
public:
	Box(float width, float height, float depth);
	float  GetVolume();
	float GetSurface();
};
