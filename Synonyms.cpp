//#include <set>
//#include <map>
//#include <string>
//#include <iostream>
//
//int main(void) {
//	int queries = 0;
//	std::map<std::string, std::set<std::string>> synonyms;
//	std::cin >> queries;
//	for (int i = 0; i < queries; ++i) {
//		std::string command, word1;
//
//		std::cin >> command >> word1;
//		if (command == "COUNT") {
//			if (!synonyms.count(word1)) {
//				std::cout << 0 << std::endl;
//			}
//			else {
//				std::cout << synonyms.at(word1).size() << std::endl;
//			}
//		}
//		else {
//			std::string word2;
//			std::cin >> word2;
//			if (command == "CHECK") {
//				std::cout << ((synonyms.count(word1) && synonyms.count(word2) && synonyms.at(word1).count(word2)) ? "YES" : "NO") << std::endl;
//			}
//			else if (command == "ADD") {
//				synonyms[word1].insert(word2);
//				synonyms[word2].insert(word1);
//			}
//		}
//	}
//	return 0;
//}
//
///**
//TEST CASE
//---------
//INPUT:
//8
//ADD program code
//COUNT cipher
//ADD code cipher
//COUNT code
//COUNT program
//CHECK code program
//CHECK program cipher
//CHECK cpp java
//---------
//OUPUT:
//0
//2
//1
//YES
//NO
//NO
//*/