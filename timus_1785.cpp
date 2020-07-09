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

	if (a < 5) cout << "few";
	else if (a < 10) cout << "several";
	else if (a < 20) cout << "pack";
	else if (a < 50) cout << "lots";
	else if (a < 100) cout << "horde";
	else if (a < 250) cout << "throng";
	else if (a < 500) cout << "swarm";
	else if (a < 1000) cout << "zounds";
	else cout << "legion";
}
