
#include <iostream>
#include <string>
 using namespace std;
int main()
{

string element[] = {"B123","C234", "C15", "B177", "G3003", "C235", "B179"};

     for (const string& element : element){
         if (element[0]=='B') {
             cout<< element << endl;
         }
     }
     return 0;
}