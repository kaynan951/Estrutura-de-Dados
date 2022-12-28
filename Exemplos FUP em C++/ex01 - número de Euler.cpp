#include <bits/stdc++.h>

using namespace std;

double fatorial(double n){

double fat;
    for(fat =1; n>1; n--){
        fat *= n;
    }

    return fat;
}
    
float euler(float n){

    float euler;

    for(euler = 0; n>0; n--){
        euler += 1/fatorial(n);
    }

    euler += 1;

    return euler;
}


int main(){

    int n;

    cin >> n;
    cout << fixed << setprecision(6) << euler(n);


}