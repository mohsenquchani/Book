#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include"writer.h"

void Writer::setname(string a) {
	name = a;
}
void Writer::setlname(string a) {
	lname = a;
}
void Writer::setrank(string a) {
	rank = a;
}

string Writer::getname() {
	return name;
}
string Writer::getlname() {
	return lname;
}
string Writer::getrank() {
	return rank;
}

void Writer::input() {
	string n, ln, r;
	cout << "name & lname & rank :" << endl;
	cin >> n >> ln >> r;
	setname(n);
	setlname(ln);
	setrank(r);
}
void Writer::print() {
	cout <<"name :" << name << endl;
	cout << "lname :" << lname << endl;
	cout <<"rank :" << rank << endl;
}
Writer::Writer(string n, string ln, string r) {
	setname(n);
	setlname(ln);
	setrank(r);
}