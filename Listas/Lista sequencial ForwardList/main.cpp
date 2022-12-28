#include <iostream> 
#include "forwardlist.h"
using namespace std;

int main() {
    ForwardList lst;

    for(int i = 1; i <= 9; i++) 
        lst.push_front(i);
    
    cout << lst.toString() << endl;
}