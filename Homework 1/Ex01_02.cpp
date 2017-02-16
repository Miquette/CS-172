////////
//Miquette Orren
//CS 2
//////////

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{

	return 0;
}

void ex02()
{
	//part a
	int length;
	int height;
	int hypotenuse;
	cout << "Give me the length of a right triangle: " << endl;
	cin >> length;
	cout << "Give me the height of a right triangle: " << endl;
	cin >> height;
	hypotenuse = sqrt((length * length) + (height * height));
	cout << "The hypotenuse is " << hypotenuse << "." << endl;

	//part b
	char x;
	cout << "Would you like to continue? Y or N: " << endl;
	cin >> x;
	if (x == 'y' || x == 'Y')
	{
		cout << "Yes" << endl;
	}
	else if (x == 'n' || x == 'N')
	{
		cout << "No" << endl;
	}

	//part c
	char x;
	x == '\t';

	//part d
	string mailingAddress;
	cout << "What is your mailing address street name? " << endl;
	
	//part e
	cin >> mailingAddress;
	cout << "You live on " << mailingAddress << " street." << endl;

	


}