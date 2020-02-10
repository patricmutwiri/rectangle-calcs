#include <iostream>

using namespace std;
float length,width,perimeter,area;
int main()
{
    cout<<"Calculate Area and Perimeter of a rectangle. \n";
    cout<<"Enter length\n";
    cin>>length;
    cout<<"Enter width\n";
    cin>>width;
    area = length*width;
    perimeter = (length+width)*2;
    cout<<"Area:\t"<<area<<"\n";
    cout<<"Perimeter:\t"<<perimeter<<"\n";
    return 0;
}
