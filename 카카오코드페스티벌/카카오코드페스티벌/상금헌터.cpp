#include<iostream>

using namespace std;

int first(int a);
int second(int a);

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, a, b;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> a>> b;

		cout << first(a) + second(b)<<"\n";
	}
	return 0;
}

int first(int a)
{
	if (a == 0)
		return 0;
	else if (a <= 1)
		return 5000000;
	else if (a <= 3)
		return 3000000;
	else if (a <= 6)
		return 2000000;
	else if (a <= 10)
		return 500000;
	else if (a <= 15)
		return 300000;
	else if (a <= 21)
		return 100000;
	else
		return 0;
}

int second(int a)
{
	if (a == 0)
		return 0;
	else if (a <= 1)
		return 5120000;
	else if (a <= 3)
		return 2560000;
	else if (a <= 7)
		return 1280000;
	else if (a <= 15)
		return 640000;
	else if (a <= 31)
		return 320000;
	else
		return 0;
}