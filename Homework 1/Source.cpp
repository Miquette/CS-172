////Miquette Orren
////CS 172
////Prof: Joe Dumoulin
////Homework #1
////////////

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	


	return 0;
}


void ex01()
{
	//part a
	bool hasPassedTest = true;

	//part b
	srand(time(NULL));
	int x = rand() % 100;
	int y = rand() % 100;
	if (x > y)
		cout << "X is greater than Y." << endl;
	else if (x == y)
		cout << "X is equal to Y." << endl;

	//part c
	int numberOfShares;
	cout << "Yo give me a number dude: " << endl;
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << "Your number is less than 100." << endl;
	else if (numberOfShares > 100)
		cout << " " << endl;

	//part d
	float boxW;
	float bookW;
	cout << "Give me the width of a box: " << endl;
	cin >> boxW;
	cout << "Give me the width of a book: " << endl;
	cin >> bookW;
	int division;
	division = boxW / bookW;
	if (boxW / bookW == division)//needs to know if quotient is a whole number or not
	{
		cout << "The book width goes into the box width evenly and equals " << division << "." << endl;
	}
	else
		cout << "The book width does not go into the box width evenly." << endl;

	//part e
	int shelflife;
	int temp;
	cout << "What is the shelf life of your chocolate? " << endl;
	cin >> shelflife;
	cout << "What is the temperature outside today? " << endl;
	cin >> temp;
	if (temp > 90)
	{
		shelflife == shelflife - 4;
		cout << "Your new shelf life is " << shelflife << " years." << endl;
	}
	else
		cout << "Your shelf life is still " << shelflife << " years." << endl;

}