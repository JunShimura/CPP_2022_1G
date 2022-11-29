#include "Box.h"
Box::Box(float width, float height, float depth) {
	this->width = width;
	this->height = height;
	this->depth = depth;
}
float Box::GetSurface() {
	return ( this->width *this->height + this->height * this->depth + this->depth * this->width)*2 ;
}
float Box::GetVolume() {
	return  this->width * this->height * this->depth;
}
