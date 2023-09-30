// Vector_Deque.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "vector.h"
#include "deque.h"

using namespace std;
void testVector();
int main()
{
	testVector();

	//cin.ignore();
	return 0;
}

void testVector() {
	cout << endl;
	cout << "----------------------------------// vector_simple:";
	cout << endl;
	vector<int> vector_simple;
	vector_simple.afficher(cout);

	cout << endl << "----------------------------------// vector_simple.push_back(3): " << endl;
	vector_simple.push_back(3);
	vector_simple.afficher(cout);

	cout << endl << "----------------------------------// vector_simple.pop_back(): " << endl;
	vector_simple.pop_back();
	vector_simple.afficher(cout);
	cout << endl;

	cout << endl;
	cout << "----------------------------------// vector_with_dim_5:";
	cout << endl;
	vector<int> vector_with_dim_5(5);
	vector_with_dim_5[0] = 3;
	cout << "operator [0] = 3 result: " << vector_with_dim_5[0] << endl;
	vector_with_dim_5.at(1) = 5;
	cout << "at(1) = 5 result: " << vector_with_dim_5.at(1) << endl;
	vector_with_dim_5.afficher(cout);
	cout << endl;

	cout << endl;
	cout << "----------------------------------// vector_with_dim_10:";
	cout << endl;
	vector<int> vector_with_dim_10(10);
	vector_with_dim_10.afficher(cout);
	cout << endl;

	cout << endl;
	cout << "----------------------------------// vector_by_copy_5:";
	cout << endl;
	vector<int> vector_by_copy_5(vector_with_dim_5);
	vector_by_copy_5.afficher(cout);
	cout << endl;

	cout << endl;
	cout << "----------------------------------// vector_vector_double:";
	cout << endl;
	vector<vector<double>> vector_vector_double;
	vector_vector_double.afficher(cout);
	cout << endl;

	cout << endl;
	cout << "----------------------------------// vector_vector_double_5:";
	cout << endl;
	vector<vector<double>> vector_vector_double_5(5);
	vector_vector_double_5.afficher(cout);
	vector<double> tmp_double_1(5);
	vector_vector_double_5.push_back(tmp_double_1);
	vector_vector_double_5[0].push_back(10);
	vector_vector_double_5[0].push_back(12);
	vector_vector_double_5.afficher(cout);
	cout << endl;


	cout << endl << endl << "----------------------------------// CLEAR ALL" << endl;
	vector_simple.clear();
	vector_with_dim_5.clear();
	vector_with_dim_10.clear();
	vector_by_copy_5.clear();
	vector_vector_double.clear();
	vector_vector_double_5.clear();


	vector_simple.afficher(cout);
	vector_with_dim_5.afficher(cout);
	vector_with_dim_10.afficher(cout);
	vector_by_copy_5.afficher(cout);
	vector_vector_double.afficher(cout);
	vector_vector_double_5.afficher(cout);
	cout << endl << "----------------------------------// END" << endl;
}