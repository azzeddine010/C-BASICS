#include <iostream>
#include <string>
using namespace std;

void ReadArrayData(int Arr1[100], int& Length)
{
    cout << "how many numbers do you want to enter :" << endl;
    cin >> Length;

    for (int i = 0; i <= Length-1; i++)
    {
        
        cout << "Enter the Number : " << i + 1 << endl;
        cin >> Arr1[i];
    }
}

void PrintArrayData(int Arr1[100], int Length) 
{
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Number [ " << i + 1 << "] :" << Arr1[i] << endl;
    }
}

int CalculatTheSumOFArray(int Arr1[100], int Length)
{
    int Sum = 0;
    for (int i = 0;i <= Length - 1;i++)
    {
        Sum = Sum + Arr1[i];
    }
    return Sum;
}

int CalculateArrayAverage(int Arr1[100] , int Length) 
{
    return (float)CalculatTheSumOFArray(Arr1 , Length) / Length;
}




int main()
{
    int Arr1[100], Length = 0;
    ReadArrayData(Arr1, Length);
    PrintArrayData(Arr1, Length);


    cout << "*********************************************\n";
    cout << "Sum : " << CalculatTheSumOFArray(Arr1, Length) << endl;
    cout << "Avarege : " << CalculateArrayAverage(Arr1, Length) << endl;

}

