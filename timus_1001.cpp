#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	vector<int64_t> numbers;
	numbers.reserve(512);

	numbers.push_back(0);
	while (cin >> numbers.back()) numbers.push_back(0);
	numbers.pop_back();

	for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
		cout << fixed << setprecision(4) << sqrt(static_cast<double>(*it)) << '\n';
}
