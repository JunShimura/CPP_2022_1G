#include "GetVolumeSurface.h"
#include<stdlib.h>
void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}
bool isSendable(BOX* box)
{
	bool sendable = false;
	box->packSize = -1;
	double length = box->x + box->y + box->z;

	for (int i = 0; i < _countof(packSize); i++) {
		if (length <= packSize[i]) {
			sendable = true;
			box->packSize = packSize[i];
			break;
		}
	}
	return sendable;
}
