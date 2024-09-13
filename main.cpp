#include <iostream>
#include "polindrom.h"

using namespace std;

int main()
{
	string str;
	cout << "Enter the word: ";
	cin >> str;
	if(check_polindrom(str))
	{
		cout << "Word is polindrom.";
	}
	else
	{
		cout << "Word is not polindrom";
	}
	return 0;
}