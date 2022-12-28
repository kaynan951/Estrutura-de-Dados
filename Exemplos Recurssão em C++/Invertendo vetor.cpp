#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int inverter(int v[], int ini, int fim){
    
    if(ini <= fim){
        int aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;

        inverter(v, ini+1, fim-1);
    }

}

int main(){

    int ini;
    int fim;

    int v[11] = {1,2,3,4,5,6,7,8,9,10};

    for(int i =11; i < 11; i++){

        cout << inverter(v, ini, fim) << endl;
        
    }

}