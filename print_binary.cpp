//#include <iostream>
//
//
///**
//* Print number in binary notation
//*/
//void print_bit(int n) {
//	if (!n) return;
//	print_bit(n >> 1);
//	std::cout << (n & 1);
//}
//
//int main(void) {
//	int n;
//	std::cin >> n;
//	print_bit(n);
//	std::cout << std::endl;
//	return 0;
//}