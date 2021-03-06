﻿// ConsoleApplication2.cpp : Defines the entry point for the console application.
//Program that calculates the area of a room for carpet cleaning. Assuming a 10 x 12 ft room $99 with an added $0.25 per foot.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int calArea()
{
	int l;
	int w;
	cout << "Enter the length and width of the room: ";
	cin >> l >> w;
	return l * w;
}

double calCost(int area)
{
	if (area < 120)
	return 99;
	double addCost;
	addCost = (area - 120) * .25;
	return 99 + addCost;
}

int main()
{
	int roomArea = calArea();
	double cost = calCost(roomArea);
	cout << "The total cost to carpet clean your room is: $" << fixed << setprecision(2) << cost << endl;

	return 0;
}

