//#include <cmath>
//#include <iostream>
//
///**
//* Solve quadratic ecuation given indices a, b, c
//*/
//int main(void) {
//	
//	double a, b, c, disc, x1, x2;
//	std::cin >> a >> b >> c;
//	//quadratic
//	if (a) {
//		disc = b * b - 4 * a * c;
//		if (disc < 0) return 0; // no real solutions
//		x1 = (-b - std::sqrt(disc)) / (2 * a);
//		x2 = (-b + std::sqrt(disc)) / (2 * a);
//		std::cout << x1;
//		if (disc)
//			std::cout << " " << x2;
//	}
//	// linear
//	else if (b) {
//		std::cout << (c ? -c : 0) / b;
//	}
//	return 0;
//}