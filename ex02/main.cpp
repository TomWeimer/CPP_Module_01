#include <iostream>

using namespace std;

int main()
{
	string 	str	= "HI THIS IS BRAIN";
	string&	stringREF = str;
	string *stringPTR;

	stringPTR = &str;
	cout << "		Address" << endl;
	cout << "string:		" << &str << endl;
	cout << "stringPTR:	" << stringPTR << endl;
	cout << "stringREF:	" << &stringREF << endl << endl;
	cout << "		Value" << endl;
	cout << "string:		" << str << endl;
	cout << "stringPTR:	" << *stringPTR << endl;
	cout << "stringREF:	" << stringREF << endl;

}