#include <iostream>
#include <string>
using namespace std;

void infoCard()
{
    cout << "Name : Azzeddine Ouidad\n";
    cout << "Age : 21\n";
    cout << "City : CasaBlanca\n";
    cout << "Country : Morocco\n";

}

void Sqw_stars()
{
    cout << "* * * *\n";
    cout << "* * * *\n";
    cout << "* * * *\n";
    cout << "* * * *\n";
}

void Func()
{
    cout << "I love programming\n";
    cout << "I love programming\n";
    cout << "I love programming\n";
    cout << "I love programming\n";
}

void H()
{
    cout << "*       *\n";
    cout << "*       *\n";
    cout << "*********\n";
    cout << "*       *\n";
    cout << "*       *\n";
}

int sumFunction()
{
    int a, b;
    cout << "please enter the first number : \n";
    cin >> a ;
    cout << "please enter the second number : \n";
    cin >> b;
    return a + b;
}







int main()
{
    //infoCard();
    //Sqw_stars();
    //Func();
    //H();

    int result = sumFunction();
    
    cout << "******************\n";
    cout << result;
}