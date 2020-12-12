#include<iostream>
using namespace std;
int main(){
    float r, area, perimeter, pi = 3.14;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    area = pi*r*r;
    perimeter = 2*pi*r;
    cout<<"Area of circle is : "<<area<<endl;
    cout<<"Perimeter of circle is : "<<perimeter<<endl;
    return 0;
}