#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float x1, x2, y1, y2, dis;
    cout<<"Enter the value of the 1st point (x, y) : ";
    cin>>x1>>y1;
    cout<<"Enter the value of the 2nd point (x, y) : ";
    cin>>x2>>y2;
    dis = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    cout<<"The distence is : "<<dis<<endl;
    return 0;
}