
#include <iostream>
 using namespace std;
int main(){
    int number;
    cout << "Please Enter an Integer value between 5 and 10 ";
    while (true){
        if (cin>> number){
            if(number >= 5 && number <= 10){
                cout<<"your input value ( "<<number<<")  has been accepted."<<endl;
            
        }else{
            cout<<"you entered ("<<number<<"). please enter a number between 5 and 10"<< endl;
        }
        }else{
            cin.clear();
            cout<<"sorry, you entered an invalid number please try again";
           
    }
    return 0;
}
}
