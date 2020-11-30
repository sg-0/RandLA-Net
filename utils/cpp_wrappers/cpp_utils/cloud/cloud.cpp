//
//
//		0==========================0
//		|    Local feature test    |
//		0==========================0
//
//		version 1.0 : 
//			> 
//
//---------------------------------------------------
//
//		Cloud source :
//		Define usefull Functions/Methods
//
//----------------------------------------------------
//
//		Hugues THOMAS - 10/02/2017
//


#include "cloud.h"

// Getters
// *******

PointXYZ max_point(std::vector<PointXYZ> points)
{
	// Initiate limits
	PointXYZ maxP(points[0]);

	// Loop over all points
	for (auto p : points)
	{
		maxP.x = fmax(maxP.x,p.x);
		maxP.y = fmax(maxP.y,p.y);
		maxP.z = fmax(maxP.z,p.z);
	}

	return maxP;
}

PointXYZ min_point(std::vector<PointXYZ> points)
{
	// Initiate limits
	PointXYZ minP(points[0]);

	// Loop over all points
	for (auto p : points)
	{
		minP.x = fmin(minP.x,p.x);
		minP.y = fmin(minP.y,p.y);
		minP.z = fmin(minP.z,p.z);
	}

	return minP;
}
