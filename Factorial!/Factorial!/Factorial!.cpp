#include <iostream>
#include <string>
using namespace std;

int ReadPositifNumbers(string message)
{
	int Num;
	do
	{
		cout << message << endl;
		cin >> Num;

	} while (Num < 0);
	
	return Num;
}


int Factorial(int Num)
{
	int F = 1;
	for (int counter = Num; counter >= 1; counter--)
	{
		F = F * counter;
	}
	return F;
}

int main()
{
	cout << Factorial(ReadPositifNumbers("please enter a positif number : ")) << endl;
}
