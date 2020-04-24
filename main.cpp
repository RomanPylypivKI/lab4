#include<iostream>
#include<math.h>
#include"Soldier.h"
using namespace std;

int main(void)
{
	string name;
	double num, day, ser, en, war;
	cout << "Enter soldier name" << endl;
	cin >> name;
	cout << "The part number in which it serves" << endl;
	cin >> num;
	cout << "Number of participation in wars" << endl;
	cin >> war;
	cout << "The number of enemies destroyed" << endl;
	cin >> en;
	cout << "Service life" << endl;
	cin >> day;
	cout << "Combat experience" << endl;
	cin >> ser;
	CSoldier rank(war, ser);
	if (day < ser)
	{
		cout << "Rank" << endl << "Error" << endl;
	}
	else
	{
		cout << "Rank" << endl << rank.rank();
	}
}