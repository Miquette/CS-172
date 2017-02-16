#include <iostream>
#include <string>
using namespace std;

int main()
{
	ex04();
	

	return 0;
}

void ex04()
{
	//part a
	const int x = 3;
	int collect[x];
	for (int y = 3; y > 0; y--)
	{
		cout << "Give me " << y << " integers: " << endl;
		cin >> collect[y - 1];
	}
	
	//part b
	int sum = 0;
	sum = collect[0] + collect[1] + collect[2];
	int product = 0;
	product = collect[0] * collect[1] * collect[2];
	cout << "The sum of these integers is " << sum << " and the product of these integers is " << product << "." << endl;

	//part of part c
	valuesinarray(collect, x);

	//part d 
	//using array collect[] with size x = 3
	int l, p = 0;
	cout << "Give me a number: " << endl;
	cin >> l;
	p = collect[2] * l ^ 2 + collect[1] * l + collect[0];
	cout << p;

}

int valuesinarray(int col[], int z)
{
	//part c
	cout << "The values in the COLLECT array of size 3 are: " << endl;
	for (z = 3; z > 0; z--)
	{
		cout << col[z - 1] << endl;
	}
}