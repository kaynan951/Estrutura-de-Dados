#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int vetor[n];

    for(int i=0; i<n; i++){
        cin >> vetor[i];
    }

    int cont=0;
    for(int j=1; j<n; j++){
        
        if(vetor[j] >= vetor[j-1]){
            cont++;
        }
    }
    if(cont == n-1){
        cout << "ok" << endl;
    }else{
        cout << "precisa de ajuste" << endl;
    }

}