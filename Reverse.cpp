//#include <vector>
//#include <iostream>
//
///**
//* Reverse order of elements in a vector
//*/
//void Reverse(std::vector<int>& v) {
//	int size = v.size() - 1;
//	if (size < 2) return;
//	for (int i = 0; i <= size/2; ++i) {
//		int tmp = v[i];
//		v[i] = v[size - i];
//		v[size - i] = tmp;
//	}
//}
//
//int main(void) {
//	std::vector<int> v = { };
//	Reverse(v);
//	for (auto i : v) {
//		std::cout << i << " ";
//	}
//}