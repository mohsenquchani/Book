#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include"writer.h"
#include"book.h"

void Book::setnameb(string a) {
	nameb = a;
}
void Book::setsize(int a) {
	size = a > 0 ? a : 1;
}
void Book::setdate(int y, int m , int d) {
	year = y > 1300 && y <= 1403 ? y : 1400;
	month = m > 0 && m <= 12 ? m : 1;
	day = d > 0 && d <= 30 ? d : 1;
}
void Book::setprice(long int a) {
	price = a > 0 ? a : 1000000;
}
void Book::setpage(int a) {
	page = a > 0 ? a : 1000;
}
void Book::setnumber(long int a) {
	number=a > 0 ? a : 100000;
}

string Book::getnameb() {
	return nameb;
}
int Book::getsize() {
	return size;
}
long int Book::getprice() {
	return price;
}
int Book::getpage() {
	return page;
}
long int Book::getnumber() {
	return number;
}

void Book::input() {
	string n;
	int y, m, d, pa, s;
	long int pr, num;
	cout << "name book :" << endl;
	cin >> n;
	cout << "year/month/day :" << endl;
	cin >> y >> m >> d;
	cout << "price & page & number :" << endl;
	cin >> pr >> pa >> num;
	setnameb(n);
	setdate(y, m, d);
	setprice(pr);
	setpage(pa);
	setnumber(num);
	cout << "number of writer :" << endl;
	cin >> s;
	writer = new Writer[s];
	for (int i = 0; i < s; i++) 
		writer[i].input();
	setsize(s);
}
void Book::print() {
	cout <<"Name :" << nameb << endl;
	cout <<"Date :" << year << "/" << setfill('0') << setw(2) << month << "/" << setfill('0') << setw(2) << day << "\n";
	cout << "price :" << price << "\n"<<"page :" << page << "\n"<< "number :" << number << endl;
	for (int i = 0; i < size; i++)
		writer[i].print();
}
void Book::compare(int n) {
	Book* b;
	int max;
	b = new Book[n];
	for (int i = 0; i < n; i++)
		b[i].input();
	cout << endl << endl;
	cout << "Book High number" << endl;
	max = 0;
	for (int i = 0; i < n; i++) {
		if (b[i].number > max)
			max = b[i].number;
	}
	for (int i = 0; i < n; i++) {
		if (max == b[i].number)
			b[i].print();
	}

}
Book::Book(string n, int s, int y, int m, int d, long int pr, int pa, long int num) {
	setnameb(n);
	setsize(s);
	setdate(y, m, d);
	setprice(pr);
	setpage(pa);
	setnumber(num);
}