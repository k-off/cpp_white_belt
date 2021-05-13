//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//
//void allBuses(const std::map<std::string, std::vector<std::string>>& buses) {
//	if (!buses.size()) {
//		std::cout << "No buses" << std::endl;
//	}
//	else {
//		for (const auto& bus : buses) {
//			std::cout << "Bus " << bus.first << ":";
//			for (const auto& stop : bus.second) {
//				std::cout << " " << stop;
//			}
//			std::cout << std::endl;
//		}
//	}
//}
//
//void newBus(std::map<std::string, std::vector<std::string>>& buses,
//			std::map<std::string, std::vector<std::string>>& stops) {
//	std::string bus;
//	int count;
//	std::cin >> bus >> count;
//	for (int i = 0; i < count; ++i) {
//		std::string curStop;
//		std::cin >> curStop;
//		buses[bus].push_back(curStop);
//		stops[curStop].push_back(bus);
//	}
//
//}
//
//void busesForStop(const std::map<std::string, std::vector<std::string>>& stops) {
//	std::string stop;
//	std::cin >> stop;
//	if (!stops.count(stop)) {
//		std::cout << "No stop" << std::endl;
//	}
//	else {
//		for (const auto& bus : stops.at(stop)) {
//			std::cout << bus << " ";
//		}
//		std::cout << std::endl;
//	}
//}
//
//void stopsForBus(const std::map<std::string, std::vector<std::string>>& buses,
//				const std::map<std::string, std::vector<std::string>>& stops) {
//	std::string bus;
//	std::cin >> bus;
//	if (!buses.count(bus)) {
//		std::cout << "No bus" << std::endl;
//	}
//	else {
//		for (const auto& stop : buses.at(bus)) {
//			std::cout << "Stop " << stop << ":";
//			if (stops.at(stop).size() < 2) {
//				std::cout << " no interchange";
//			}
//			else {
//				for (const auto& b : stops.at(stop)) {
//					if (b != bus) {
//						std::cout << " " << b;
//					}
//				}
//			}
//			std::cout << std::endl;
//		}
//	}
//}
//
//int main(void) {
//	std::map<std::string, std::vector<std::string>> buses;
//	std::map<std::string, std::vector<std::string>> stops;
//	int q;
//	std::cin >> q;
//	for (int i = 0; i < q; ++i) {
//		std::string command;
//		std::cin >> command;
//		if (command == "ALL_BUSES") allBuses(buses);
//		else if (command == "NEW_BUS") newBus(buses, stops);
//		else if (command == "BUSES_FOR_STOP") busesForStop(stops);
//		else if (command == "STOPS_FOR_BUS") stopsForBus(buses, stops);
//	}
//	return 0;
//}
//
///**
//TEST CASE
//---------
//INPUT:
//10
//ALL_BUSES
//BUSES_FOR_STOP Marushkino
//STOPS_FOR_BUS 32K
//NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
//NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
//BUSES_FOR_STOP Vnukovo
//NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
//NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
//STOPS_FOR_BUS 272
//ALL_BUSES
//---------
//OUTPUT:
//No buses
//No stop
//No bus
//32 32K
//Stop Vnukovo: 32 32K 950
//Stop Moskovsky: no interchange
//Stop Rumyantsevo: no interchange
//Stop Troparyovo: 950
//Bus 272: Vnukovo Moskovsky Rumyantsevo Troparyovo
//Bus 32: Tolstopaltsevo Marushkino Vnukovo
//Bus 32K: Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
//Bus 950: Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
//*/