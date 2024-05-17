#pragma once
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include"writer.h"

#ifndef book_h
#define book_h
class Book
{
public:
	Book() {}
	Book(string,int,int ,int,int,long int,int,long int);

	void setnameb(string);
	void setsize(int);
	void setdate(int , int , int);
	void setprice(long int);
	void setpage(int);
	void setnumber(long int);

	string getnameb();
	int getsize();
	long int getprice();
	int getpage();
	long int getnumber();

	void compare(int);
	void input();
	void print();

private:
	string nameb;
	Writer* writer;
	int size;
	int year, month, day;
	long int price;
	int page;
	long int number;
};
#endif