//#include <iostream>
//#include <vector>
//#include <string>
//
//bool IsPalindrom(const std::string& s) {
//	auto begin = s.begin();
//	auto end = begin + s.size() - 1;
//	while (end > begin) {
//		if (*end != *begin) return false;
//		--end;
//		++begin;
//	}
//	return true;
//}
//
///**
//* From vector of words return only palindroms with minimum length
//*/
//std::vector<std::string> PalindromFilter(const std::vector<std::string>& words, int minLength) {
//	std::vector<std::string> res;
//	for (auto word : words) {
//		if (word.size() >= minLength && IsPalindrom(word)) {
//			res.push_back(word);
//		}
//	}
//	return res;
//}
//
//int main(void) {
//	int count, minLength;
//	std::string cur;
//	std::vector<std::string> res;
//	std::cin >> count >> minLength;
//	for (int i = 0; i < count; ++i) {
//		std::cin >> cur;
//		res.push_back(cur);
//	}
//	res = PalindromFilter(res, minLength);
//	for (auto i : res) {
//		std::cout << i << std::endl;
//	}
//	return 0;
//}