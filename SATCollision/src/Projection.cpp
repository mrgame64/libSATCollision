/*
 * Projection.cpp
 *
 *  Created on: Oct 20, 2014
 *      Author: mrgame64
 */

#include "Projection.h"

Projection::Projection(){}
Projection::Projection(float min, float max) : min(min), max(max) {}

float Projection::len2() {
	float len = this->len();
	return len*len;
}

float Projection::len() {
	return max-min;
}

bool Projection::overlaps(Projection* other) {
	return (((other->min <= this->min) && (this->min <= other->max)) || ((other->min <= this->max) && (this->max <= other->max)));
}

//Minimal Translation Distance to get this out of other
float Projection::get_mtd(Projection* other) {
	if((other->min <= this->min) && (this->min <= other->max))
		return other->max - this->min;
	if((other->min <= this->max) && (this->max <= other->max))
		return other->min - this->max;
	else
		return 0;
}

