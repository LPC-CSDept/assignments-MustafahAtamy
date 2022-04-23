#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
int previousNum = 0;
int getRdnum(void)
{
	return (rand() % 50) + 1;
}
int isGreater(int num)
{
	if (num > previousNum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	srand(time(0));
	int N = 10;
	ofstream outfile("numbers.txt");
	if (!outfile)
	{
		cout << "numbers.txt file can't be opened!\n";
		return 1;
	}
	previousNum = getRdnum();
	for (int i = 1; i < N; i++)
	{
		int num = getRdnum();
		if (isGreater(num))
		{
			outfile << num << "";
		}
		previousNum = num;
		outfile.close();
		return 0
	}