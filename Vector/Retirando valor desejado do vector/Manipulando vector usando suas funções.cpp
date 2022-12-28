#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &vec) {
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
}

int main() {
    vector<int> vec {1,5,5,2,3,4,5,6,7,8,5,5,5};

    //vector<int>::iterator it = vec.begin();

    auto it = vec.begin();
    print(vec);
    cout << endl;

    int n;
    cout << "Digite um numero que deseja remover do vector: ";
    cin >> n;
    // remove todos os N do vector
    while(it != vec.end()) {
        if(*it == n) {
            it = vec.erase(it);
        } else {
            it++;
        }
    }
    cout << endl;
    print(vec);

}