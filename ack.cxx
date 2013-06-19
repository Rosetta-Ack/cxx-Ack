#include <iostream>


int ack(int m, int n) {
	if (m == 0) {
		return n + 1;
	} else if (n == 0) {
		return ack(m - 1, 1);
	} else {
		return ack(m - 1, ack(m, n - 1));
	}
}

int main(int argc, char* argv[]) {
	std::cout << "A(2, 2) = " << ack(2, 2) << std::endl;
	std::cout << "A(4, 1) = " << ack(4, 1) << std::endl;
	return 0;
}


