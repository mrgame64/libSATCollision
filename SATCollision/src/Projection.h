/*
 * Projection.h
 *
 *  Created on: Oct 20, 2014
 *      Author: mrgame64
 */

#ifndef PROJECTION_H_
#define PROJECTION_H_

class Projection {
public:
	float min, max;

	Projection();
	Projection(float min, float max);
	float len2();
	float len();
	bool overlaps(Projection* other);
	float get_mtd(Projection* other);
};

#endif /* PROJECTION_H_ */
