#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int getRdnum();
{
	return (1 + rand() % 100);
}
int getRdnumb(int n2)
{
	return (1 + rand()) % n2;
}
int getRdnumb(int n1, int n2)
{
	return rand() % (n2 - n1 + 1) + n1 + 1;
}
int main()
{
	srand(time(0));
	cout << getRdnum() << endl;
	cout << getRdnum(100) << endl;
	cout << getRdnum(32, 100);
}