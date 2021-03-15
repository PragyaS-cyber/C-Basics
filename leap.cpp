#include <iostream>
using namespace std;
int main ()
{
int year;
cout<< "Enter the year:" << endl;
cin >> year;
if (year % 4==0)
{
    if (year % 100 ==0)
    {
        if (year % 400 ==0)
        {
            cout << "LEAP YEAR";
        }
        else
        cout << "LEAP YEAR";
    }
    else
    cout << " NOT LEAP YEAR";
}
return 0;
}