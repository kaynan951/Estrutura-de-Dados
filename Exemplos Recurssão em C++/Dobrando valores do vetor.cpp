#include <bits/stdc++.h>

using namespace std;

void dobra(int n, int v[]){
    for(int i=0; i<n; i++){
        v[i] *= 2;
    }
}

void printar(int n, int v[]){
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    int array[10] {1,2,3,4,5,6,7,8,9,10};
    dobra(10, array);
    printar(10, array);

    int *ptr = array;

    cout << "endereco: " << array << endl;
    cout << "valor: " << *array << endl;
    cout << "endereco: " << ptr << endl;
    cout << "valor: " << *ptr << endl;
    
    
    

}