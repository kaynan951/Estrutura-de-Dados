#include <bits/stdc++.h>

using namespace std;

int main(){

    int m[3][3];


    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){

            cin >> m[i][j];

        }
    }
    int cont = 0;
    for(int i=0; i< 3; i++){
        for(int j=0; j< 2; j++){

            if(m[j][i] > m[j+1][i]){
                cont++;
            }

        }
    }

    cout << cont << endl;

}