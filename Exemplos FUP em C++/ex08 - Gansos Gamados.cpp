#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    stringstream  ss;
    string frase;
    string nova = "z";
    int cont = 0;

    getline(cin, frase);

    ss << frase;

    while(ss >> frase){ 

        if(nova == "z"){
            
        }else if(nova > frase){
            cont = 1;
        }
            nova = frase;
    }
    
    if(cont == 1 ){
        cout << "nao";
    }else{
        cout << "sim";
    }
}