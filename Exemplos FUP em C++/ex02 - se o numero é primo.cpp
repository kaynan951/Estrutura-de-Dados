#include <bits/stdc++.h>

using namespace std;

int primo(int n){
    
        if(n == 2 || n == 1){
            return true;
        }

    for(int i=2; i<n; i++){

        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    int a,b;
    cin >> a >> b;

    for(int i = a; i<=b; i++){
        if(primo(i) == true){
            cout << i << endl;
        }
    }

}