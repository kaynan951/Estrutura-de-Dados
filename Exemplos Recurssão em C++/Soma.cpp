#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int soma(int n){

    if(n == 1){
        
        return 1;
        
    }
    else {
        
        return soma(n-1)+n;

    }

}
int main(){
    int x;
    
    cin >> x;
    cout << soma(x) << endl;

}