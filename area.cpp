#include <iostream>
using namespace std;
int main ()
{
  int length, width;
  cout << " Enter the value of length and width of the rectangle: "<< endl;
  cin >> length >> width;
  int peri, area;

  peri = 2*(length+ width);
  area = length*width;
  cout << "the value of area is %d and perimeter is %d " << area << peri << endl;
  
}