#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int verifica(string str){

    // ADICIONANDO VALORES BOOLEANOS EM VARIAVEIS PARA FUTURA VERIFICAÇÃO

    bool float1 = false;
    bool int1 = false;
    bool str1 = false;

    // PERCORRENDO PALAVRA E VERIFICANDO SUAS REPRESENTAÇÕES, CASO SE ENCAIXE NO CASO, ESSA VARIÁVEL RECEBE TRUE

    for(int i=0; i< str.length(); i++){

        if((str[i] == '.') && (str[i-1] >= '0' && str[i-1] <= '9') && (str[i+1] >= '0' && str[i+1] <= '9')){
            float1 = true;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            str1 = true;
        }else{
            int1 = true;
        }
    }

    // RETORNANDO VALORES PARA ANÁLISE  

    if(float1){
        return 1;
    }else if(str1 && !float1){
        return 2;
    }else if((int1 && !str1) && (int1 && !float1)){
        return 3;
    }

}

int main(){

    stringstream ss;
    string str;

    getline(cin, str);

    ss << str;

    // NO WHILE, PRECORREMOS A FRASE E VERIFICAMOS PALAVRA POR PALAVRA, CASO A CONDIÇÃO SEJA SATISFEITA, IMPRIMIMOS O QUE A QUESTÃO PEDE

    while(ss >> str){

        if(verifica(str) == 1){
            cout << "float ";
        }else if(verifica(str) == 2){
            cout << "str ";
        }else if(verifica(str) == 3){
            cout << "int " ;
        }
    }
}
