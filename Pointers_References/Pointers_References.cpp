// Pointers_References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Pointers can point nowhere ( NULL ), whereas a reference always refers to an object. 
You can't take the address of a reference like you can with pointers. 
There's no "reference arithmetic" (but you can take the address of an object pointed by a reference and do pointer arithmetic on it as in &obj + 5 ).
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//create variables
	int var_a = 100;//this var contains value of 100
	int& var_a_ref = var_a;// this var is of type reference (int&) therefore var_a_ref contains addr of a
	//& is address of operator replace all instances of a_ref with addr of var_a
	int* p1 = &var_a; //this var is of type pointer (int*) contains address of var_a
	//p1 = 100;//error as p1 is of type int*
	int b = 10;
	int c[] = { 10,20,30,40 };
	int* cp = c;

	cout << "Variables" << endl;
	cout << var_a << endl;
	cout << var_a_ref << endl;//no & so just value of var_a
	cout << p1 << endl;//var p1 is a pointer that contained address of var_a

	cout << "References" << endl;
	cout << &var_a << endl;
	cout << &var_a_ref << endl;// get addr of var_a
	cout << *&var_a_ref << endl;//get value at addr of var_a
	//cout << *var_a_ref << endl;//this cant work as var_a_ref contains value of a and * is for Get value at var_a
	cout << "Pointers" << endl;
	cout << &p1 << endl;//Get addr of p1 that contained addr of var_a
	cout << *p1 << endl;//Get value pointed to by p1
	cout << *p1 + b << endl;
	//Pointer arithmetic.Adding or subtracting from a pointer moves it by a multiple of the size of the data type it points to.
	cout << &p1 + 1 << endl;
	cout << *(&p1 + 1) << endl;
	cout << "Arrays" << endl;
	//cout << c << endl;//This line crashed VS 2017!!!!
	cout << &c << endl;//get addr of 1st item in array c
	cout << *c << endl;// get 1st value of item in array c
	cout << cp << endl;//get addr of 1st item in array c
	cout << *cp << endl;// get 1st value of item in array c
	cout << &cp << endl;// get addr of variable cp that contained addr of 1st item of array c
	cout << "Pointer Arithmetic" << endl;
	cout << *c+1 << endl;// get 1st value of item in array c
	cout << sizeof(c) << endl;
	cout << &c + 2 << endl;// move pointer based on sizeof(c) 
	cout << cp + 1 << endl;// get addr of 2nd value of item in array c

	//Array of Pointers
	cout << "Array of Pointer" << endl;
	int* ap[] = { p1,cp };//this is of type int**
	//int* pap = ap;
	cout << &ap << endl;//addr of ap
	cout << *ap << endl;//get 1st value in ap
	cout << sizeof(ap) << endl;
	cout << &ap+1 << endl; //move pointer to next struct of sizeof(ap)
	cout << *ap+1 << endl;//get 1st value in ap and move pointer by sizeof(int)
	cout << ap[1] << endl;//access to array of pointers
	cout << ap[1][3] << endl;
	cout << "TEST" << endl;







}
