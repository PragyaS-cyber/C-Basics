#include <iostream>
using namespace std;
struct time
{
    int hour;
    int minute;
    int second;
}  ;
int main ()
{
    struct time x;
    cout << "enter hour:"<< endl;
    cin >> x.hour;
    cout << " enter minutes" << endl;
    cin >> x.minute;
    cout << "enter seconds"<< endl;
    cin >> x.second;
    cout <<" time is "<< x.hour<< ":"<< x.minute<<":" << x.second;
    return 0; 
}