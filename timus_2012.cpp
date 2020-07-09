#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	int a;

	cin >> a;
	a = 12 - a;

	if (4 * 60 > 45 * a)
		cout << "YES";
	else
		cout << "NO";
}
