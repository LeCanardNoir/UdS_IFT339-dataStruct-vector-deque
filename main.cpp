// Vector_Deque.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "vector.h"
#include "deque.h"

using namespace std;

int main()
{
	vector<int> vector_simple;

	vector<int> vector_with_dim(5);
	vector<int> vector_by_copy(vector_with_dim);

	vector_simple.afficher(cout);
	vector_with_dim.afficher(cout);
	vector_by_copy.afficher(cout);

	cout << endl;
	vector_simple.clear();
	vector_with_dim.clear();
	vector_by_copy.clear();

	cin.ignore();
	return 0;
}
