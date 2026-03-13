// E6B Flight Computer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Calculate the total distance using the distance formula
//Given the time and speed
//Distance formula: sqrt(x-x)^2+(y-y)^2

double calcFunc(double distance, double speed)
{
	double time = (distance / speed) * 60;
	return time;
}

// Whenever you are using variables from another function in main, make sure the variables match up in the main fucntion when it's delcalred
//double speedTimeDist(double time, double speed)
// {
	//double distance;
	//return time * speed;
// }

int main()
{
	cout << "E6B Flight Computer Test Program.\n";
	double speed, dist, timeMin, timeHr;


	// Get Data from the User

	cout << "Distance Traveled in NM: ";
	cin >> dist;

	cout << "Ground Speed in KTS: ";
	cin >> speed;


	


	// Made sure the function could only call 2 variables
	// result = speedTimeDist(s, t);

	//When calling functions make sure that the variables are called in order of need
	timeMin = calcFunc(dist, speed);

	cout << "Total Time is: " << timeMin << " minutes" << endl;
	
	// Also make the time return in a hour format
	timeHr = timeMin/60
	cout << "Total Time is: " << timeHr << " hours" << endl;


	return 0;

}
