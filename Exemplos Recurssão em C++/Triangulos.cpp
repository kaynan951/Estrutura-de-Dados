#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int triangulos(int n){
    
    if(n == 0) return 0;

    else if(n == 1) return 1;

    else
        return n + 2*triangulos(n-1) - triangulos(n-2);

}

int main(){

int n;
cin >> n;
cout << triangulos(n) << endl;

}