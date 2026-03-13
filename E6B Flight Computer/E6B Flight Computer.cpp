// E6B Flight Computer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double speedTimeDist(double distance, double time, double speed)
{
	return speed * time;
}

int main()
{
	cout << "E6B Flight Computer Test Program.\n";
	double result, s, t;

	// Get Data from the User
	cout << "What is your Ground Speed?: ";
	cin >> s;
	cout << "What is your time? (in hours): ";
	cin >> t;

	// result = speedTimeDist(s, t);

	cout << "Total Distance is: " << result << " nm" << endl;

	return 0;

}
