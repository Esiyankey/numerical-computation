#include<iostream>
#include<cmath>
using namespace std;

double func(double x , double y){

return ((x*y+pow(y,2))/x);

}

int main (){
 double xi,x0,y0,yi, h,iterations,result,res;

 cout<<"please enter the value for x"<< endl;
 cin>> xi;
 cout<< "please enter the value for y" << endl;
 cin>> yi;
cout<<"please enter the value for h"<<endl;
cin>> h ;
result =func(xi,yi);
x0=(xi + h/2);
y0= yi + ((h/2)*func(xi,yi));
iterations=(yi + (h* func(x0,y0)));
res=func(x0,y0);
cout<< result<<endl;
cout<< x0<<endl;
cout<< y0<<endl;
cout<< res<<endl;
cout<< iterations << endl;

        
// cout<<"Hello world"<< endl;
return 0;

}