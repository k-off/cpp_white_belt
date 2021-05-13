//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//int main(void) {
//	int n, tmp;
//	std::vector<int> v;
//	std::cin >> n;
//	for (int i = 0; i < n; ++i) {
//		std::cin >> tmp;
//		v.push_back(tmp);
//	}
//	if (n > 1) {
//		std::sort(std::begin(v), std::end(v), [](int a, int b) { return abs(a) < abs(b); });
//	}
//	for (const auto& i : v) {
//		std::cout << i << " ";
//	}
//	std::cout << std::endl;
//	return 0;
//}
//
///**
//TEST CASE
//---------
//INPUT:
//2 -4 3
//---------
//OUTPUT:
//3 -4
//*/