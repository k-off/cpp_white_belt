//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//int main(void) {
//	int n;
//	std::cin >> n;
//	std::vector<std::string> v;
//	for (int i = 0; i < n; ++i) {
//		std::string tmp;
//		std::cin >> tmp;
//		v.push_back(tmp);
//	}
//	std::sort(std::begin(v), std::end(v), [](const std::string& a, const std::string& b) {
//		int j = 0;
//		while (j < a.size() && j < b.size() && tolower(a[j]) == tolower(b[j])) {
//			++j;
//		}
//		return ((j < a.size() && j < b.size() && tolower(a[j]) < tolower(b[j])) || a.size() < b.size());
//		});
//	for (const auto& s : v) {
//		std::cout << s << " ";
//	}
//	std::cout << std::endl;
//	return 0;
//}