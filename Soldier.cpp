#include "Soldier.h"
#include<math.h>
#include <iostream>
using namespace std;
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
void CSoldier::name(double x)
{
	string n;
	cin >> n;
}
void CSoldier::num(double x)
{
	cin >> x;
}
void CSoldier::en(double x)
{
	cin >> x;
}
void CSoldier::time(double x)
{
	cin >> x;
}