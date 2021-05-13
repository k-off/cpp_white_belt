//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//
//int main(void) {
//	int queries;
//	int index = 0;
//	std::map<std::vector<std::string>, int> busLines;
//	std::cin >> queries;
//	for (int i = 0; i < queries; ++i) {
//		int amount;
//		std::vector<std::string> stops;
//		std::cin >> amount;
//		for (int j = 0; j < amount; ++j) {
//			std::string tmp;
//			std::cin >> tmp;
//			stops.push_back(tmp);
//		}
//		if (busLines.count(stops)) {
//			std::cout << "Already exists for " << busLines.at(stops) << std::endl;
//		}
//		else {
//			++index;
//			busLines[stops] = index;
//			std::cout << "New bus " << index << std::endl;
//		}
//	}
//	return 0;
//}
//
///**
//TEST CASE
//---------
//INPUT:
//4
//2 Marushkino Kokoshkino
//1 Kokoshkino
//2 Marushkino Kokoshkino
//2 Kokoshkino Marushkino
//---------
//OUTPUT:
//New bus 1
//New bus 2
//Already exists for 1
//New bus 3
//*/