#include <iostream>
#include "Vector.h"
using namespace std;

void print(const Vector& lst) {
		cout << "capacity: " << lst.capacity() << endl;
		cout << "size: " << lst.size() << endl;
	for(int i = 0; i < lst.size(); i++) {
		cout << lst[i] << " " ;
	}
	cout << endl;
}

int main() {

	Vector lista;

	for(int i = 1; i<= 20; i++) {
		lista.push_back(i);
	}

	print(lista);

}