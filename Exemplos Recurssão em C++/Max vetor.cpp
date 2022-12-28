#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int maximoR (int n , int v []) {

    if (n == 1)
        return v [0];
    else {
    int max;
        max = maximoR (n-1 , v); 
        if ( max > v[n-1])
            return max ;
        else
            return v[n-1];
    }
 


}
int main(){
    
    int v[50];
    int x;
    cin >> x;

    cout << maximoR(x,v[]) << endl;

}