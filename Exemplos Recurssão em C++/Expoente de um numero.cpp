#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int exp(double a,double b){
    
    if(b == 0) return 1;

    else
        return a*exp(a,b-1);

}

int main(){

int a,b;
cin >> a >> b;
cout << exp(a,b) << endl;

}