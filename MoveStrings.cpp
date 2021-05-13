//#include <iostream>
//#include <vector>
//#include <string>
//
//
///**
//* Move strings from v1 to v2 and clear v1
//*/
//void MoveStrings(std::vector<std::string>& v1, std::vector<std::string>& v2) {
//	for (auto w : v1) {
//		v2.push_back(w);
//	}
//	v1.clear();
//}
//
//int main(void) {
//	std::vector<std::string> v1 = { "a", "b", "c" };
//	std::vector<std::string> v2 = { "z" };
//	MoveStrings(v1, v2);
//	for (auto w : v1) {
//		std::cout << w << std::endl;
//	}
//	std::cout << "Vector2" << std::endl;
//	for (auto w : v2) {
//		std::cout << w << std::endl;
//	}
//	return 0;
//}