#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int AmountVowels(const string& text){
    int VowelAmount = 0;
    string vowels = "aeiouAEIOU";
for (char c: text){
    if (vowels.find(c) != string:: npos){
        VowelAmount++;
    }
} 
return VowelAmount;
}
int AmountWords(const string& text){
    int WordAmount = 0;
    bool inword = false;
    for (char c: text){
        if(isspace(c)){
            inword = false;
        }else if(! inword){
          WordAmount++;
          inword = true;
        }
    }
    return WordAmount;
}
string Reverse(const string& text){
    string ReverseText = text;
    int length = text.length();
    for (int i =0; i < length /2 ; i++){
        swap(ReverseText[i], ReverseText[length-i-1]);
        
    }return ReverseText;
}
string CSL (const string& text){
    string result;
    bool Capitalised = false;
    for (char c: text){
        if (isalpha(c)){
            if (Capitalised){
        result += toupper(c);
        Capitalised = false;
        
            }else{
                result += c;
                Capitalised = true;
            }
        }else{
            result += c;
            if (isspace(c) || ispunct(c)){
                Capitalised = true;
            }
        }
    }return result;
}
int main(){
    string fileData;
    ifstream infile("funke.txt");
    if (infile.is_open()){
        getline (infile, fileData);
        infile.close();
    int VowelAmount = AmountVowels(fileData);
    cout<<" Amount of Vowels :"<<VowelAmount<<endl;
    
    int WordAmount = AmountWords(fileData);
    cout<<" Amount of words :"<<WordAmount<<endl;
    
    string ReverseText = Reverse(fileData);
    cout<<" Reverse text :"<<ReverseText<<endl;
    
    string Capitalised = CSL(fileData);
    cout<<" Capitalised statement :"<<Capitalised<<endl;
    
    }else{
     cout<<" unable to open file"<<endl;  
    }return 0;
}