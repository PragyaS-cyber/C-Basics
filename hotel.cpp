#include <iostream>
using namespace std;
struct hotel
{
    char name[20];
    char address[20];
    char grade[2];
    int avg_charge;
    int no_rooms;
}x;
void charges( int)
{
    if (x.avg_charge< 1200)
    printf("%s",x.name);
}
int main()
{
cout <<"HOTEL ANANTA"<< x.name;
cin >> x.name ;
cout<< "malviya nagar" << endl;
cin >> x.address;
cout << "3*"<< endl;
cin >> x.grade;
cout << "1000";
cin >> x.avg_charge;
cout << "4" << endl;
cin >> x.no_rooms;
charges( x.hotel::avg_charge);
}