#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
void say(string sayThis) {
	cout << sayThis << endl;

}


std::string hear(std::string PromptUser) {

	string UserInput = " ";
	cout << PromptUser << endl;
	cin >> UserInput;
	return UserInput;

}

int hearnum(int PromptUser) { //thought this would work but apparntly not

	int UserInput = 0;
	cout << PromptUser << endl;
	cin >> UserInput;
	return UserInput;

}