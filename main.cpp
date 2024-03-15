#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float angle_radients,angles_degrees;
    double h,d;
    cout<<"enter the height of your when peering in inches";
    cin>>h;
    cout <<"enter the distance inches";
    cin>>d;
    cout<<"enter the angle in degrees";
    cin>>angles_degrees;
    angle_radients = angles_degrees*(M_PI/180) ;
    double height = ( h*d*tan(angle_radients));
    double heightfeet = height/12;
    cout<<"the  height of the tree"<<heightfeet<<"feet"<<endl;
    return 0;
}
