#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Hello World." << endl;
	cout << "Hello World 2." << endl;
	cout << "Hello World 3." << endl;

	int intNum = 15;
	double doubleNum = 15.99;
	char character = 'A';
	string text = "my text";

	cout << intNum << endl;
	cout << doubleNum << endl;
	cout << character << endl;
	cout << text << endl;

	cout << intNum << doubleNum << " " << character << text << endl;

	int x = 1;
	int y = 2;
	int sum = x + y;

	cout << x + y << endl;
	cout << sum << endl;

	int a = 5, b = 10, c = 15;

	cout << a + b + c << endl;

	int d, e, f;

	d = e = f = 45;

	cout << d + e + f << endl;

	const float PI = 3.14;

	int num;
	cout << "enter number: ";
	cin >> num;
	cout << "your number is " << num << endl;

	int a, b;
	cout << "enter num 1: ";
	cin >> a;
	cout << "enter num 2: ";
	cin >> b;
	cout << "sum is: " << a + b << endl;

	float a = 10E3;
	double b = 10E5;

	cout << a << " " << b << endl;

	bool boolFalse = false;
	bool boolTrue = true;

	cout << boolFalse;
	cout << boolTrue;

	string text = "this is text";
	cout << text;

	string text = "adsfsdfsdfdsfdsfasf4wfsd";

	cout << text.length();
	cout << text[0];

	string fullName;
	cout << "enter ur full name";
	getline(cin, fullName);
	cout << fullName;

	for(int i = 0; i < 10; i++){
		cout << i << endl;
	}

	return 0;


}
