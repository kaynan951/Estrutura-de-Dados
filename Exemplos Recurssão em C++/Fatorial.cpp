#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

long fat(int n){

    if(n == 1 || n == 0){
        
        return 1;
        
    }
    else {
        
        return n*fat(n-1);

    }

}
int main(){
    
    int x;
    cin >> x;
    cout << fat(x) << endl;

}