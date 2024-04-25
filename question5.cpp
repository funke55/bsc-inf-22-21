#include <iostream>
using namespace std;
double CalculateTriangleArea(double base, double hieght);
int main(){
 int select;
 while(true){
     cout<<"please select the area of the shap to calculate:"<<endl;
     cout<<"1.Triangle"<<endl;
     cout<<"2.Rectangle"<<endl;
     cout<<"3.Square"<<endl;
     cout<<"4.Quit"<<endl;
     cout<<"enter selection";
     cin>> select;
 if (select<1 || select>4){
    cout<<"Your input was: ("<<select<<") which is an invalid input. please enter a valid input "<<endl; 
    continue;
 }     
 switch(select){
     case 1:{
         double base, hieght;
     cout<<"enter the base"<<endl;
     cin>>base;
     cout<<"enter the hieght"<<endl;
     cin>> hieght;
     double triangle = 0.5 * base * hieght;
     cout<<"The area of triangle is :"<<triangle<<endl;
     break;
     }
     case 2:{
         double length, width;
     cout<<"enter the length"<<endl;
     cin>>length;
     cout<<"enter the width"<<endl;
     cin>> width;
     double Rectangle =  length * width;
     cout<<"The area of Rectangle is :"<<Rectangle<<endl;
     break;
     }
     case 3:{
         double side;
     cout<<"enter the side"<<endl;
     cin>>side;
     double Square =  side * side;
     cout<<"The area of Square is :"<<Square<<endl;
     break;
     }
     case 4:{
     cout<<"Exicting program....."<<endl;
     return 0;
     }
 }return 0;
}
}
