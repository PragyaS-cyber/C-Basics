#include <iostream>
using namespace std;
int main () 
{
    int gross_salary, DA , bonus, HRA , base;
    cout << "enter the value of base" << endl;
    cin >> base;
    DA = 40*base/100;
    HRA = 80*DA/100;
    bonus = 25*HRA/100;
    gross_salary = DA + HRA + bonus;
    cout << " the net salary is:" << gross_salary;
    return 0;
}