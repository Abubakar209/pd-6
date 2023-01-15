#include<iostream>

using namespace std;
string result(int h,int x,int y);
main()
{
 int height,X_axis,Y_axis;
 cout<<"Enter height:";
 cin>>height;
 cout<<"Enter x coordinate:";
 cin>>X_axis;
 cout<<"Enter y coordinate:";
 cin>>Y_axis;
result(height,X_axis,Y_axis);
}

string result(int h,int x,int y)
{

  int x_component=h*3;
  int x_component_2=h*2;
  int y_component=h*4;
  int y_component_2=2*h;
  int y_component_3=3*h;
  if ((x>0 && x<x_component && y<h && y>0) || ((x>h && x<x_component_2) && (y < y_component && y>0))){
 cout<<"Inside";

  }
 
  else if (((x==0 || x==x_component ) && (y==h || y==0)) || ((x==h || x==x_component_2) && (y==y_component || y==0 || y==y_component_2 || y==y_component_3 || y==h))){
cout<<"Border";
  }
  
  else{
cout<<"Outside";
  }
  
}