#include "StatsCalc.h"
#include "cmath"

float meanD = 4.0f; // 4 integral devision becuase of mean

float StatsCalc::mean(int x1, int x2, int x3, int x4) // Calculate the mean and tranforming it into a float type
{
	fmean = (x1 + x2 + x3 + x4) / meanD;
	return fmean;
}

float StatsCalc::standarddeviation(int x1, int x2, int x3, int x4) // standdev calculation 
{
	return sqrt(((((fmean - x1) * (fmean - x1)) + ((fmean - x2) * (fmean - x2))
		+ ((fmean - x3) * (fmean - x3)) + ((fmean - x4) * (fmean - x4))) / 4));
}
