//#include <iostream>
//#include <vector>
//
///**
//* Output indexes of input values bigger than average input
//*/
//int main(void) {
//	int n, cur, avg = 0;
//	std::vector<int> v, res;
//	std::cin >> n;
//	for (int i = 0; i < n; ++i) {
//		std::cin >> cur;
//		avg += cur;
//		v.push_back(cur);
//	}
//	avg /= n;
//	for (int i = 0; i < v.size(); ++i) {
//		if (v[i] > avg) {
//			res.push_back(i);
//		}
//	}
//	std::cout << res.size() << std::endl;
//	for (auto i : res) {
//		std::cout << " " << i;
//	}
//}