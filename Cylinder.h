/*
Student Name: Dmitriy Katkov
Student ID: U2010115
Program Statement: Lab Assignment #6 Week #8 - Inheritance
*/
#pragma once
#include<iostream>
using namespace std;
class Circle
{
protected: //radius is protected to be easily used in the Cylinder
	double radius;
public:
	Circle(double r = 0) //constructor of Cirlce
	{
		cout << "Constructor Circle is out" << endl;
		this->radius = r;
	} 
	~Circle() //destructor
	{
		cout << "The destructor Circle is on the hunt...." << endl;
	}
	void setRadius(double r) //functions
	{
		if (r >= 0)
		{
			this->radius = r;
		}
	}
	const double getRadius()
	{
		return radius;
	}
	const double getArea()
	{
		return radius * radius * 3.14;
	}
	const double getCircumference()
	{
		return 2 * 3.14 * radius;
	}
	const double getDiameter()
	{
		return 2 * radius;
	}
};
class Cylinder:public Circle //inheritance (public)
{
private:
	double length; //private, because only used in this class
public:
	Cylinder(double l=0, double r=0) //double constructor for inherited and local members
	{
		cout << "Constructor Cylinder is out\n";
		this->length = l;
		this->radius = r;
	}
	~Cylinder() //destructor
	{
		cout << "Destructor Cylinder is on the hunt..." << endl;
	}
	void setLength(double l) //functions
	{
		if (l >= 0)
		{
			this->length = l;
		}
	}
	const double getLength()
	{
		return length;
	}
	const double getVolume()
	{
		return getArea() * length;
	}
	const double getSurface()
	{
		return (getArea() * 2 + getCircumference()*length); 
	}
};