//#include <map>
//#include <set>
//#include <string>
//#include <iostream>
//
//std::set<std::string> BuildMapValuesSet(const std::map<int, std::string>& m) {
//	std::set<std::string> s;
//	for (const auto& item : m) {
//		s.insert(item.second);
//	}
//	return s;
//}
//
//int main(void) {
//	std::set<std::string> s = BuildMapValuesSet({
//		{1, "odd"},
//		{2, "even"},
//		{3, "odd"},
//		{4, "even"},
//		{5, "odd"}
//	});
//	for (const std::string& value : s) {
//		std::cout << value << std::endl;
//	}
//	return 0;
//}