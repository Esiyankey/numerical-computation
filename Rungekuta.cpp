#include<iostream>
#include<cmath>
using namespace std;


double func(double x,double y){
    return (x*y + pow(y,2));
}
int main(){
    double k1,k2,k3,k4,h,xi,yi,res;
    double result;
    cout<<"please enter the value for x"<<endl;
    cin>>xi;
    cout<<"please enter the value for y"<<endl;
    cin>>yi;
    cout<<"please enter the value for h"<<endl;
    cin>>h;
    k1=h*func(xi,yi);
    k2=h*func((xi+(h/2)),(yi+(k1/2)));
    k3=h*func((xi+(h/2)),(yi+(k2/2)));
    k4=h*func((xi+h),(yi+k3));
    res = (k1+(2*k2)+(2*k3)+k4)*(0.1666666667);
    result = yi + res;
    cout<<"k1 is "<< k1<<endl;
    cout<<"k2 is "<< k2<<endl;
    cout<<"k3 is "<< k3<<endl;
    cout<<"k4 is "<< k4<<endl;

    cout<<"Your value for y is "<<result ;

    return 0;
}