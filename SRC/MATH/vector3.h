#ifndef __VECTOR3_H__
#define __VECTOR3_H__

#include <stdint.h>
#include <math.h>

typedef struct{
	float x;
	float y;
	float z;
}Vector3f_t;

typedef struct{
	double x;
	double y;
	double z;
}Vector3d_t;

typedef struct{
	int16_t x;
	int16_t y;
	int16_t z;
}Vector3i_t;

typedef struct{
	int32_t x;
	int32_t y;
	int32_t z;
}Vector3l_t;

Vector3f_t Vector3iTo3f(Vector3i_t vector);
Vector3i_t Vector3fTo3i(Vector3f_t vector);
Vector3f_t VectorCrossProduct(Vector3f_t a, Vector3f_t b);
Vector3f_t Vector3MulMatrix3(Vector3f_t vector, float* m);
Vector3f_t VectorRotate(Vector3f_t vector, Vector3f_t deltaAngle);

#endif

