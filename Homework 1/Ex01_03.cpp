///////////
////Miquette Orren
////CS 172
////EX 03
///////////

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int add(int e, int f);

int main()
{
	ex03();

	//part of part f
	srand(time(NULL));
	int c, d;
	c = rand() % 100;
	d = rand() % 100;
	add(c, d);

	//part of part g
	int q = 1;
	int r = 3;
	int s = 8;
	addOne(q, r, s);

	system("pause");//the code closed out if I didn't have this in here
	return 0;
}

void ex03()
{
	//part a
	int x = 0;
	cout << "Pick a number between 1 and 10: " << endl;
	while (x < 1 || x > 10)
	{
		cin >> x;
	}

	//part of part e
	int doubler(x);

	//part b
	if (x >= 1 && x <= 10)
	{
		int z;
		int sum = 0;
		for (int y = 1; y <= x; y++)
		{
			z = y * y * y;
			sum += z;
		}
		cout << "The sum of the cubes of the numbers less than and equal to the number you gave is " << sum << "." << endl;

	}

	//part c
	do {
		cout << "*" << endl;
		x--;
	} while (x > 0);

	//part d
	for (int m = 0; m <= 40; m += 2)
	{
		cout << m << endl;
	}

}

//part e

int doubler(int x)
{
	int doubler = 0;
	doubler = 2 * x;
	return doubler;
}

//part f

int add(int e, int f)
{
	int sum = 0;
	sum = e + f;
	cout << "Sum = " << sum << endl;
}

// part g
int addOne(int& n, int& o, int& p)
{
	n = n++;
	o = o++;
	p = p++;
}