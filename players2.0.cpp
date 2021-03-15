#include <iostream>
using namespace std;
struct info
{
    char player_name[50];
    char team_name[50];
    int avg;
};
int main ()
{
struct info arr[50];
int i;
cout<< "enter the details of player" << endl;
for (i=0; i<5; i++)
{cin >>  arr[i].player_name >>arr[i].team_name>>  arr[i].avg;}
for (i=0; i<5; i++)
    {
cout << "name:" << arr[i].player_name << endl;
cout << "team_name:" << arr[i].team_name<< endl;
cout<< "average:" << arr[i].avg<< endl;
        }
}