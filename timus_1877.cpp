#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	int a, b;

	cin >> a >> b;

	if (!(a % 2) || b % 2)
		cout << "yes";
	else
		cout << "no";
}
