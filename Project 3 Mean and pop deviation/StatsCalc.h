#ifndef STATSCALC_H
#define STATSCALC_H

class StatsCalc
{
public:
	StatsCalc() {}; // Constructor and Destructor
	~StatsCalc() {};

	float mean(int x1, int x2, int x3, int x4); // 4 integer mean 

	float standarddeviation(int x1, int x2, int x3, int x4); // 4 integer standdev 
private:
	float fmean; // allows mean to be a float type 

};

#endif // !STATSCALC_H