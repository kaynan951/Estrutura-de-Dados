#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main(){

    stringstream ss;
    string frase;
    string str;
    char c;

// AQUI RECEBEMOS A FRASE E O CARACTER DO USUÁRIO, PARA VERIFICAÇÃO  

    getline(cin, frase);
    ss << frase;
    cin >> c;

/* 
iNICIO DAS VERFICAÇÕES POR CARACTER, NESTE CASO, SE A LETRA INSERIDA PELO USUARIO FOR 'M', 
TRANFORMARÁ TODA A FRASE EM MAIÚSCULA.
*/
    if(c == 'M'){

        while(ss >> frase){

            for(int i = 0; i < frase.length(); i++){

                if(frase[i] >= 'a' && frase[i] <= 'z'){
                    frase[i] -= 32;
                }

            }
            str += frase + " ";

        }

    }
    if(c == 'm'){

        while(ss >> frase){

            for(int i = 0; i < frase.length(); i++){

                if(frase[i] >= 'A' && frase[i] <= 'Z'){
                    frase[i] += 32;
                }
                
            }
            str += frase + " ";
        }

    }

// NESSE CASO EM ESPECÍFICO, PRECISAMOS DEIXAR MAIÚSCULO TODAS AS PRIMEIRAS LETRAS DE CADA PALAVRA,


    if(c == 'p'){

        while(ss >> frase){

        if(frase.length() > 1){

            for(int i = 0; i < frase.length(); i++){

                if(frase[0] >= 'a' && frase[0] <= 'z'){
                    frase[0] -= 32;
                }
                
            }

// AQUI VERIFICAMOS, COMO A PALAVRA TEM MENOS DE UMA LETRA, DEIXAMOS ELA MINÚSCULA;

            }else{
                
                if(frase[0] >= 'A' && frase[0] <= 'Z'){
                    frase[0] += 32;
                }

            }
            str += frase + " ";
        }

    }

/* E POR ÚLTIMO, INVERTEMOS OS CASES, SE A LETRA FOR MINÚSCULA SUBITRAIMOS 32 DO SEU VALOR ASCII 
TORNANDO ASSIM ELA MAIUSCULA, E VICE VERSA.
*/
    if(c == 'i'){

        while(ss >> frase){

            for(int i = 0; i < frase.length(); i++){

                if(frase[i] >= 'a' && frase[i] <= 'z'){
                    frase[i] -= 32;
                }else if(frase[i] >= 'A' && frase[i] <= 'Z'){
                    frase[i] += 32;
                }
                
            }
            str += frase + " ";
        }

    }


for(int i = 0; i < str.length()-1; i++){

    cout << str[i];
    
}


}