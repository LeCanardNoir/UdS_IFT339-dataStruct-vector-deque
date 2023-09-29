﻿// Vector_Deque.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "vector.h"
#include "deque.h"

using namespace std;

int main()
{
	cout << endl;
	cout << "----------------------------------// vector_simple:";
	cout << endl;
	vector<int> vector_simple;
	//vector_simple[0] = 3;
	//vector_simple.push_back(5);

	vector_simple.afficher(cout);
	cout << endl;

	cout << endl;
	cout << "----------------------------------// vector_with_dim_5:";
	cout << endl;
	vector<int> vector_with_dim_5(5);
	vector_with_dim_5[0] = 3;
	cout << vector_with_dim_5[0] << endl;

	vector_with_dim_5.at(1) = 5;

	cout << vector_with_dim_5.at(0) << endl;

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

	//cout << endl;
	//cout << "----------------------------------// vector_vector_double:";
	//cout << endl;
	//vector<vector<double>> vector_vector_double();
	//cout << endl;


	cout << endl;
	vector_simple.clear();
	vector_with_dim_5.clear();
	vector_with_dim_10.clear();
	vector_by_copy_5.clear();
	cout << endl << "----------------------------------// END";

	cin.ignore();
	return 0;
}
