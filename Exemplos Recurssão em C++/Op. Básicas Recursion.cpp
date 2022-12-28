#include <sstream>  
#include <vector>  
#include <string>
#include <iostream>

using namespace std;

void vetvet(vector<int> a, int n){
    if(n==1){
        cout << a[n-1] << " ";
    }else{
        vetvet(a,n-1);
        cout << a[n-1] << " ";
    }

}

void rvet(vector<int> a, int n){
    if(n==1){
        cout << a[n-1] << " ";
    }else{
        cout << a[n-1] << " ";
        rvet(a,n-1);
    }

}


int sum(vector<int> a,int n){
    if(n==1){
        return a[n-1];
    }else{
        return a[n-1] + sum(a,n-1);
    }
}

int mult(vector<int> a,int n){   
    if(n==1){
        return a[n-1];
    }else{
        return a[n-1] * mult(a,n-1);
    }
}

int min(vector<int> a, int n){
   if (n == 1){
      return a[n-1];
    }else{
      int menor = min(a,n-1);
      if(menor < a[n-1] ){
         return menor;
         }
      else{
         return a[n-1];
      }
    }
}


int main()
{

char c;
string line;
getline(cin, line);
stringstream ss(line);
vector<int> vet;
int value;
while(ss >> value)
    vet.push_back(value);

cout << "Vetor : [ ";
    vetvet(vet, vet.size());
    cout << "]" << endl;

cout << "Vetor Inverso: [ ";
    rvet(vet,vet.size());
    cout << "]" << endl;
    
cout <<"Soma dos elementos : " << sum(vet,vet.size())<< endl;

cout <<"Multiplicacao dos elementos: "<< mult(vet,vet.size()) << endl;

cout <<"Valor minimo do vetor: " << min(vet,vet.size()) << endl;
}
