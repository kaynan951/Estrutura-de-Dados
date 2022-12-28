#include <iostream>

using namespace std;

/*
Imprime os passos para solução da Torre de Hanoi.
Entrada:
- qte: números de discos que devem ser movidos da torre inicial para a torre final
- ini: torre que é considerada como torre inicial
- aux: torre que é considerada como torre auxiliar
- fim: torre que é considerada como torre final
Pseudocódigo:
   se existe apenas 1 disco para mover
      mova este único disco da torre inicial para a torre final
   senão
      recursivamente mova qte-1 discos da torre inicial para a torre auxiliar
      mova o disco que sobrou da torre inicial para a torre final
      recursivamente mova qte-1 discos da torre auxiliar para a torre final
*/
void hanoi(int n, char a, char b, char c)
{
   if(n == 0){
        return;
    }
    if(n == 1){
        cout << a << " -> " << c << endl;
    }else{
    // CASO O N >= 2
        hanoi(n-1, a, c, b);

        cout << a << " -> " << c << endl;

        hanoi(n-1, b, a, c);
    }
}


int main()
{
   int n;
   cout << "Digite a quantidade de discos: ";
   cin >> n;
   hanoi(n, 'A', 'B', 'C');
   return 0;
}