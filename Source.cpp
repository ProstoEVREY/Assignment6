/*
Student Name: Dmitriy Katkov
Student ID: U2010115
Program Statement: Lab Assignment #6 Week #8 - Inheritance
*/
#include<iostream>
#include"Cylinder.h"
using namespace std;

int main()
{
	Cylinder* a = new Cylinder(); //dynamic memory allocation
	cout << "Please, enter the radius of the Base Circle\n";
	double r;
	cin >> r;
	a->setRadius(r);
	cout << "Please, enter the length(height) of the Cylinder\n";
	double l;
	cin >> l;
	a->setLength(l);
	cout << "The volume of the Cylinder is:\n";
	cout<<a->getVolume()<<"\n"; //here inherited getArea is used
	cout << "The surface of the Cylinder is:\n";
	cout<<a->getSurface() << "\n"; //inherited getArea and also getCircumference are used
	cout << "The diameter of the Base Circle is:\n";
	cout << a->getDiameter() << "\n";
	delete a; //destruction of pointer
	system("pause");
	return 0;
}