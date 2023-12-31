﻿// Vector_Deque.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "vector.h"
#include "deque.h"

using namespace std;
void test_vector();
void test_deque();

int main()
{
	test_vector();
	cout << endl;
	test_deque();

	//cin.ignore();
	return 0;
}

void test_vector() {
	cout << endl << "/////////////////////////////////////////////////// test_vector()" << endl << endl;
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
	tmp_double_1[0] = 0.5;
	tmp_double_1[1] = 1.5;
	tmp_double_1[2] = 2.5;
	tmp_double_1[3] = 3.5;
	tmp_double_1[4] = 4.5;
	cout << endl;
	cout << "----------------------------------// tmp_double_1:";
	cout << endl;
	tmp_double_1.afficher(cout);
	vector_vector_double_5[1] = tmp_double_1;
	vector_vector_double_5[2] = tmp_double_1;
	vector_vector_double_5.push_back(tmp_double_1);
	cout << endl;
	cout << "----------------------------------// tmp_double_1 after push_back():";
	cout << endl;
	tmp_double_1.afficher(cout);
	//vector_vector_double_5.push_back(tmp_double_1);
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
	tmp_double_1.clear();


	vector_simple.afficher(cout);
	vector_with_dim_5.afficher(cout);
	vector_with_dim_10.afficher(cout);
	vector_by_copy_5.afficher(cout);
	vector_vector_double.afficher(cout);
	tmp_double_1.afficher(cout);
	vector_vector_double_5.afficher(cout);
	cout << endl << "----------------------------------// VECTOR END" << endl;
}

void test_deque() {
	cout << endl << "/////////////////////////////////////////////////// test_deque()" << endl << endl;

	cout << "----------------------------------// deque_simple:" << endl;
	deque<int> deque_simple;
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_front(66):" << endl;
	deque_simple.push_front(66);
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_front(99):" << endl;
	deque_simple.push_front(99);
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_back(50):" << endl;
	deque_simple.push_back(50);
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_back(100):" << endl;
	deque_simple.push_back(100);
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_back(200):" << endl;
	deque_simple.push_back(200);
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_back(300):" << endl;
	cout << "----------------------------------// deque_simple.push_back(400):" << endl;
	deque_simple.push_back(300);
	deque_simple.push_back(400);
	deque_simple.afficher(cout);
	cout << "----------------------------------// deque_simple.push_front(11111):" << endl;
	deque_simple.push_front(11111);
	deque_simple.afficher(cout);


	cout << endl << "----------------------------------// deque_5:" << endl;
	deque<int> deque_5(5);
	cout << "deque_5.operator[0] = 300" << endl;
	deque_5[0] = 300;
	cout << "deque_5.at(1) = 10" << endl;
	deque_5.at(1) = 10;
	deque_5.afficher(cout);


	cout << endl << "----------------------------------// deque_5_to_10:" << endl;
	deque_5.resize(10);
	deque_5[6] = 12;
	deque_5.afficher(cout);
	cout << endl << "----------------------------------// deque_10_to_12:" << endl;
	deque_5.resize(12);
	deque_5.afficher(cout);
	cout << endl << "----------------------------------// deque_12_to_22:" << endl;
	deque_5.resize(22);
	deque_5.afficher(cout);
	cout << endl << "----------------------------------// deque_22 pop_back():" << endl;
	deque_5.pop_back();
	deque_5.afficher(cout);
	cout << endl << "----------------------------------// deque_22 pop_front():" << endl;
	deque_5.pop_front();
	deque_5.afficher(cout);
	cout << endl << "----------------------------------// deque_22 push_back(9999):" << endl;
	deque_5.push_back(9999);
	deque_5.afficher(cout);
	cout << endl << "----------------------------------// deque_22 push_front(5555):" << endl;
	deque_5.push_front(5555);
	deque_5.afficher(cout);

	cout << endl << "----------------------------------// deque_vector_5:" << endl;
	deque<vector<int>> deque_vector_5(5);
	deque_vector_5.afficher(cout);
	deque_vector_5[0] = vector<int>(5);
	deque_vector_5.afficher(cout);
	deque_vector_5[1] = vector<int>(10);
	deque_vector_5.afficher(cout);
	deque_vector_5[0][0] = 99;
	deque_vector_5.afficher(cout);
	deque_vector_5[1][0] = 3000;
	deque_vector_5.afficher(cout);
	deque_vector_5[0].afficher(cout);


	cout << endl << endl << "----------------------------------// CLEAR ALL" << endl;
	deque_simple.clear();
	deque_5.clear();
	deque_vector_5.clear();

	deque_simple.afficher(cout);
	deque_5.afficher(cout);
	deque_vector_5.afficher(cout);


	cout << endl << "----------------------------------// DEQUE END" << endl;
}