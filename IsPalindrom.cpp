//#include <iostream>
//
///**
//* Check whether a string is palindrom
//* (spells identically from the beginning and from the end)
//*/
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
//int main(void) {
//	std::string s;
//	std::cin >> s;
//	std::cout << IsPalindrom(s) << std::endl;
//	return 0;
//}
