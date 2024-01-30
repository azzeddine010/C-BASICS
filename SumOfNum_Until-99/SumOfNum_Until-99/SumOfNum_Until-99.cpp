#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string message)
{
    int Num;
    cout << message << endl;
    cin >> Num;
    return Num;
}
int SumNumbers()
{
    int Sum = 0, Number = 0, Counter = 1;
	do
	{
        Number = ReadNumber("enter a number please : " + to_string(Counter));
        if (Number == -99)
        {
            break;
        }
        Sum += Number;
        Counter++;
	} while (Number != -99);

    return Sum;
}



int main()
{
    cout << "Result : " << SumNumbers();
}