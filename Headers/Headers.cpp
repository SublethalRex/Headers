// Headers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;



int math() {

	int num1; //ints for the math
	int num2;
	int num3;
	say("Enter the first number you would like to add\n");
	cin >> num1; //number 1 in
	say("Enter the second number you want added\n");
	cin >> num2; //number 2 in
	num3 = num1 + num2;
	say("The final number is " + num3); //supposed to display final number btu it doesnt work for some reason

	return 0;
}


int main()
{
	
	math(); //calls math function



    return 0;
}

