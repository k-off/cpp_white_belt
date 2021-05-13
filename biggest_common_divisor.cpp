//#include <iostream>
//
///**
//* Find biggest common divisor
//* Euclidean algorithm
//*/
//int main(void) {
//	int a, b;
//	std::cin >> a >> b;
//	while (a && b) {
//		if (a > b) {
//			a %= b;
//		}
//		else {
//			b %= a;
//		}
//	}
//	std::cout << (a + b);
//	return 0;
//}