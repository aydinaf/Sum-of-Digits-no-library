#include <iostream>
using namespace std;

int modulo(int n1) {// modulos function
	if (n1 < 10) {
		return n1;
	}
	else if (n1 == 10) {
		return 0;
	}
	else {
		return modulo(n1 - 10); //recursion
	}
}

int dadder(int x) {
	if (x >= 10) {
		return (modulo(x) + dadder(x / 10)); //sum of digits = (x % 10) + (x /10) % 10 + (x/100) % 10 + ...
	}
	else {
		return x;// ( x = x / 10 ) until (x < 10) >>> x is last digit
	}
}

int main() {
	int num;
	cin >> num;
	cout << "Sum of digits is " << dadder(num) << endl;
	system("pause");
	return 0;
}
