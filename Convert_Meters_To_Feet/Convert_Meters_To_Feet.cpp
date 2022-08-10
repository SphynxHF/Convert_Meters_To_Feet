#include <iostream>
#include <string>
using namespace std;

int main() {
	// 3.280 Feet in 1 meter meter variable set for Refence
	int foot = 3.28084f;
	int meter = 1;
	int result;
	cout << "Convert meters into feet how many meters? ";
	cin >> meter;

	result = meter * foot;

	cout << result;
}