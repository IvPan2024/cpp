#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "RU");

	int res = 10;
	std::cout << res << std::endl;

	return 0;
}