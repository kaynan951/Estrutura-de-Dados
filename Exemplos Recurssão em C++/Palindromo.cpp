#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool palindromo(string str, int ini, int fim){
    
    if(ini <= fim){

        if(str[ini] == str[fim]){

            return(palindromo(str, ini+1, fim-1));


        }else  
            return false;

    }
    else return true;

}

int main(){
int ini, fim;
stringstream ss;
string str;

getline(cin, str);
ss << str;

cout << boolalpha << palindromo(str, 0, str.size()-1) << endl;

}