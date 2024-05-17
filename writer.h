#pragma once
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#ifndef writer_h
#define writer_h
class Writer
{
public:
	Writer() {}
	Writer(string, string, string);

	void setname(string);
	void setlname(string);
	void setrank(string);

	string getname();
	string getlname();
	string getrank();

	void input();
	void print();

private:
	string name;
	string lname;
	string rank;
};
#endif