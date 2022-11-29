#pragma once
class Box {
private:
	double width;	//幅
	double height;	//高さ
	double depth;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize; //送れる宅急便サイズ
public:
	Box(float width, float height, float depth);
	float  GetVolume();
	float GetSurface();
};
