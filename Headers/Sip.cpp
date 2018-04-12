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