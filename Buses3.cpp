//#include <iostream>
//#include <set>
//#include <string>
//#include <map>
//
//int main(void) {
//	int queries;
//	int index = 0;
//	std::map<std::set<std::string>, int> buslines;
//	std::cin >> queries;
//	for (int i = 0; i < queries; ++i) {
//		int amount;
//		std::set<std::string> stops;
//		std::cin >> amount;
//		for (int j = 0; j < amount; ++j) {
//			std::string tmp;
//			std::cin >> tmp;
//			stops.insert(tmp);
//		}
//		if (buslines.count(stops)) {
//			std::cout << "Already exists for " << buslines.at(stops) << std::endl;
//		}
//		else {
//			++index;
//			buslines[stops] = index;
//			std::cout << "New bus " << index << std::endl;
//		}
//	}
//	return 0;
//}
//
///**
//test case
//---------
//input:
//5
//2 Marushkino Kokoshkino
//1 Kokoshkino
//2 Marushkino Kokoshkino
//2 Kokoshkino Marushkino
//2 Kokoshkino Kokoshkino
//---------
//output:
//New bus 1
//New bus 2
//Already exists for 1
//Already exists for 1
//Already exists for 2
//*/