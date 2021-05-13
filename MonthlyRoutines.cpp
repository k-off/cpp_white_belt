//#include <vector>
//#include <string>
//#include <iostream>
//
//int main(void) {
//	std::vector<int> months = { 30, 27, 30, 29, 30, 29, 30, 30, 29, 30, 29, 30 };
//	int monthIndex = 0;
//	std::vector<std::vector<std::string>> routines(31);
//	int countOps = 0;
//	std::cin >> countOps;
//	for (int i = 0; i < countOps; ++i) {
//		std::string command;
//		std::cin >> command;
//		if (command == "NEXT") {
//			int curSize = months[monthIndex];
//			int nextSize = months[monthIndex + 1];
//			for (int i = curSize; i > nextSize; --i) {
//				routines[nextSize].insert(end(routines[nextSize]), begin(routines[i]), end(routines[i]));
//				routines[i].resize(0);
//			}
//			++monthIndex;
//			monthIndex %= 12;
//		}
//		else {
//			int day = 0;
//			std::cin >> day;
//			--day;
//			if (command == "DUMP") {
//				int size = routines[day].size();
//				std::cout << size;
//				for (int j = 0; j < size; ++j) {
//					std::cout << " " << routines[day][j];
//				}
//				std::cout << std::endl;
//			}
//			else if (command == "ADD") {
//				std::string routine;
//				std::cin >> routine;
//				routines[day].push_back(routine);
//			}
//		}
//	}
//}