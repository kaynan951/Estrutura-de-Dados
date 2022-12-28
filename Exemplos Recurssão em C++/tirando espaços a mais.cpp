#include <bits/stdc++.h>

using namespace std;

int main(){

    string line;
    getline(cin, line);

    for(int i=0; i<line.length(); i++){

        if(line[i] == ' ' || line[i] == '\t'){

            while(line[i] == ' ' || line[i] == '\t'){
                i++;
            }
            cout << ' ';
            i--;
        }else
            cout << line[i];
    }


}