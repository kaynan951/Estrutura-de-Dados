#include <bits/stdc++.h>

using namespace std;

int main(){

    int q;
    cin >> q;
    
    const int quant = q;
    float preco[quant];
    float chuteA[quant];
    char chuteB[quant];
    
    for(int i=0; i<quant; i++){
        cin >> preco[i];
    }
    for(int i=0; i<quant; i++){
        cin >> chuteA[i];
    }
    for(int i=0; i<quant; i++){
        cin >> chuteB[i];
    }
    
int contA = 0, contB = 0;

    for(int i = 0; i < quant; i++){
    
        if(chuteA[i] == preco[i]){
            contA++;
        }else if((preco[i] > chuteA[i]) && (chuteB[i] == 'm')){
            contA++;
        }else if((preco[i] < chuteA[i]) && (chuteB[i] == 'M')){
            contA++;
        }else 
            contB++;
}
        
if(contA > contB){
    cout << "primeiro" << endl;
}else if(contA == contB){
    cout << "empate" << endl;
}else{
    cout << "segundo" << endl;
}
}