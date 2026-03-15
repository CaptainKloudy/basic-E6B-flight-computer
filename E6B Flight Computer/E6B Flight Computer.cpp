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

void speedTimeDistance()
{
	int speed, dist, timeMin;
	int timeHr;

	// Need to add another menu here to see what they want to calculate. Ask if they want to find distance, speed or time

	cout << "What is your distance Traveled in NAUTICAL MILES?: ";
	cin >> dist;

	cout << "What is your ground speed in KNOTS?: ";
	cin >> speed;
	
	timeMin = calcFunc(dist, speed);
	cout << " Your Total Time is: " << timeMin << " minutes" << endl;

	timeHr = timeMin / 60;

	cout << "Total Time is: " << timeHr << " hours and " << timeMin % 60 << " minutes and " << 60/timeMin << " seconds" << endl;
	


}

//Whenever you are using variables from another function in main, make sure the variables match up in the main fucntion when it's delcalred
//double speedTimeDist(double time, double speed)
 // {
	//double distance;
	//return time * speed;
 //}

int main()
{

	int choice;
	
	cout << "===Welcome to the E6B Flight Computer!===\n";
	cout << " This was programed by Saleema and Ethan!   \n";
	cout << "\n";
	cout << "How can our program assist you today?\n";
	cout << "\n";
	cout << "Please select from the options below\n";
	cout << "\n";
	cout << "1 - Speed, Time & Distance Calculations\n";
	cout << "\n";
	cout << "2 - Fuel Calculations\n";
	cout << "\n";
	cout << "Enter your choice: ";
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		cout << "You have selected Option 1.\n";
		speedTimeDistance();
		break;
	case 2:
		cout << "You have selected Option 2.";
	}

}
