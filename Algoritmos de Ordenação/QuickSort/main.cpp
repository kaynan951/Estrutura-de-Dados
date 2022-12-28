#include <iomanip>
#include <iostream>

using namespace std;

// algoritmo para particionar um array em dois subarrays
// A[p . . . j − 1] ≤ A[j] < A[j + 1 . . . r]
int partition(int A[], int l, int r) {
    int pivo = A[r];
    int j = l;
    for(int k = l; k < r; k++) {
        if(A[k] <= pivo) {
            int aux = A[k];
            A[k] = A[j];
            A[j] = aux;
            j++;
        }
    }
    A[r] = A[j];
    A[j] = pivo;
    return j;

}


// algoritmo de ordenacao quicksort --- complexidade O(n log n)
void quickSort(int A[], int l, int r) {
    if(l < r) {
        int p = partition(A, l, r);
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, r);
    }
}

// algoritmo de ordenacao quicksort --- complexidade O(n log n)
void quickSort2(int A[], int l, int r) {
    while(l < r) {
        int j = partition(A, l, r);
        if(j - l < r - j) {
            quickSort2(A, l, j - 1);
            l = j + 1;
        } else {
            quickSort2(A, j + 1, r);
            r = j - 1;
        }
    }
}


// funcao auxiliar para imprimir um array
void print(int A[], int l, int r) {
    for(int i = l; i <= r; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    // para gerar numeros aleatorios
    const int n = 10;
    int vec[n];
    for(int i = 0; i < n; i++) {
        vec[i] = 1 + rand() % 10;
    }
    
    // printando desordenado
    print(vec, 0, n-1);
    // ordenando
    quickSort2(vec, 0, n-1);
    // printando ordenado
    print(vec, 0, n-1);
    
    return 0;
}