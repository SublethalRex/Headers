// Headers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;



int main()
{
	say("Welcome to something something");
	std:string userName = "";

	userName = hear("What is your name? ");

	
	say("Hello " + userName);

	system("pause");




    return 0;
}

