// Ch2_TankOfGas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double gallons, mpgTown, mpgHighway, distance;

	cout << "How many gallons of gas can the car's gas tank hold? ";
	cin >> gallons;

	cout << "How many miles per gallon can the car drive in town? ";
	cin >> mpgTown;

	cout << "How many miles per gallon can the car drive on the highway? ";
	cin >> mpgHighway;

	distance = gallons * mpgTown; // Calculuate how many miles the car can travel on one tank of gas when driving in town.
	cout << "\nThe car can travel " << distance << " miles on one tank of gas when driven in town.\n";

	distance = gallons * mpgHighway; // Calculate how many miles the car can travel on one tank of gas when driving on the highway.
	cout << "The car can travel " << distance << " miles on one tank of gas when driven on the highway.\n\n";
	return 0;
}