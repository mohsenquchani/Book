#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include"writer.h"
#include"book.h"

int main() {
	Book* b;
	int n;
	cout << "number of book :" << endl;
	cin >> n;
	b = new Book[n];
	b->compare(n);
	return 0;
}