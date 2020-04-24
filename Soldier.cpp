#include "Soldier.h"
#include<math.h>
CSoldier::CSoldier(double l, double w)
{
	war = l;
	ser = w;
}
CSoldier::CSoldier(const CSoldier& rect)
{
	war = rect.war;
	ser = rect.ser;
}
CSoldier::~CSoldier()
{
}
double CSoldier::rank()
{	
	return int((ser + pow(war, 5)) / 50);
}