#include<iostream>
using namespace std;
int main(){
	int n, ones, tens, h;
	cin >> n;
	ones = n % 10;
	tens = n % 100 / 10;
	h = n / 100;
	cout << h << endl;
	cout << tens << endl;
	cout << ones << endl;
	return 0;
}