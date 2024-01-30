#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Num;
    cout << "enter the number : " << endl;
    cin >> Num;
    return Num;
}

int ReadPower()
{
    int Pow;
    cout << "enter the Power : " << endl;
    cin >> Pow;
    return Pow;
}


int PowerOfM(int Number , int M)
{  
    if (M == 0)
    {
        //any number his power is 0 equal 1
        return 1;
    }

    int P = 1;
    for (int i = 1 ; i <= M ; i++)
    {
        P = P * Number;
    }
    return P;
}


int main()
{
    cout << "Result : " << PowerOfM(ReadNumber() , ReadPower());
    return 0;
}
