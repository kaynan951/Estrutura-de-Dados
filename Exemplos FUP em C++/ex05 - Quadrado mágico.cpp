#include <bits/stdc++.h>

using namespace std;

int main(){

    int m[3][3];

    int somaL = 0;
    int diag = 0;
    int colunaL = 0;

    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){

            cin >> m[i][j];

        }
    }

    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){

            somaL = m[0][0] + m[0][1] + m[0][2];     
     
        }
    }
    
    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){

            diag = m[0][0] + m[1][1] + m[2][2];     
     
        }
    }
    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){

            colunaL = m[0][0] + m[1][0] + m[2][0];     
     
        }
    }

    if((somaL == colunaL) && (colunaL == diag)){
        cout << "sim";
    }else
        cout << "nao";

}