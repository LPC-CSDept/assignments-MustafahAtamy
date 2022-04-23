#include <iostream>
#include <fstream>
using namespace std;

void getInput(int *a, int *b)
{
	cout << "Enter value of n1 : ";
	cin >> *a;
	cout << "Enter value of n2 : ";
	cin >> *b;
}

int isSame(int *a, int *b)
{
	if (*a == *b)
	{
		return 1;
	}
}

float intDivision(int *a, int *b)
{
	if (*a > *b)
	{
		cout << "\nDividing n1/n2..";
		return float(*a) / float(*b);
	}
	else
	{
		cout << "\nDividing n2/n1..";
		return float(*b) / float(*a);
	}
}

void fileWrite(float result)
{
	ofstream fw("D:\\question5.txt", std::ofstream::out);
	cout << "\n\nWriting to file..";
	fw << result << "\n";
	fw.close();
}

int main()
{
	int n1, n2;
	float result;

	getInput(&n1, &n2);

	if (isSame(&n1, &n2) == 1)
	{
		cout << "\n  The numbers are equal";
		exit;
	}

	else
	{
		result = intDivision(&n1, &n2);
		cout << "\n  Result of Division = " << result;
	}

	fileWrite(result);

	exit;
