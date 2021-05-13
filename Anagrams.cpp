//#include <iostream>
//#include <string>
//#include <map>
//
//std::map<char, int> BuildCharCounters(std::string s) {
//	std::map<char, int> m;
//	for (const auto& c : s) {
//		++m[c];
//	}
//	return m;
//}
//
//int main(void) {
//	int count;
//	std::cin >> count;
//	for (int i = 0; i < count; ++i) {
//		std::string s1, s2;
//		std::cin >> s1 >> s2;
//		std::cout << (BuildCharCounters(s1) == BuildCharCounters(s2) ? "YES" : "NO") << std::endl;
//	}
//	return 0;
//}