//#include <iostream>
//#include <string>
//#include <map>
//
///**
//* Commands:
//* CHANGE_CAPITAL country new_capital
//* RENAME old_country_name new_country_name
//* ABOUT country
//* DUMP (print all capitals of all countries)
//*/
//
//int main(void) {
//	int q;
//	std::map<std::string, std::string> countries;
//	std::cin >> q;
//	for (int i = 0; i < q; ++i) {
//		std::string command;
//		std::cin >> command;
//		if (command == "DUMP") {
//			if (!countries.size()) {
//				std::cout << "There are no countries in the world" << std::endl;
//			}
//			else {
//				for (const auto& country : countries) {
//					std::cout << country.first << "/" << country.second << " ";
//				}
//				std::cout << std::endl;
//			}
//		}
//		else {
//			std::string arg1;
//			std::cin >> arg1;
//			if (command == "ABOUT") {
//				if (countries.count(arg1)) {
//					std::cout << "Country " << arg1 << " has capital " << countries[arg1] << std::endl;
//				}
//				else {
//					std::cout << "Country " << arg1 << " doesn't exist" << std::endl;
//				}
//			}
//			else {
//				std::string arg2;
//				std::cin >> arg2;
//				if (command == "RENAME") {
//					if (arg1 == arg2 || !countries.count(arg1) || countries.count(arg2)) {
//						std::cout << "Incorrect rename, skip" << std::endl;
//					}
//					else {
//						std::cout << "Country " << arg1 << " with capital " << countries[arg1] << " has been renamed to " << arg2 << std::endl;
//						countries[arg2] = countries[arg1];
//						countries.erase(arg1);
//					}
//				}
//				else if (command == "CHANGE_CAPITAL") {
//					if (!countries.count(arg1)) {
//						countries[arg1] = arg2;
//						std::cout << "Introduce new country " << arg1 << " with capital " << arg2 << std::endl;
//					}
//					else if (countries.at(arg1) == arg2) {
//						std::cout << "Country " << arg1 << " hasn't changed its capital" << std::endl;
//					}
//					else if (countries.at(arg1) != arg2) {
//						std::cout << "Country " << arg1 << " has changed its capital from " <<  countries.at(arg1) << " to " << arg2 << std::endl;
//						countries[arg1] = arg2;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
///**
//TEST1
//--------
//INPUT:
//6
//CHANGE_CAPITAL RussianEmpire Petrograd
//RENAME RussianEmpire RussianRepublic
//ABOUT RussianRepublic
//RENAME RussianRepublic USSR
//CHANGE_CAPITAL USSR Moscow
//DUMP
//--------
//OUTPUT:
//Introduce new country RussianEmpire with capital Petrograd
//Country RussianEmpire with capital Petrograd has been renamed to RussianRepublic
//Country RussianRepublic has capital Petrograd
//Country RussianRepublic with capital Petrograd has been renamed to USSR
//Country USSR has changed its capital from Petrograd to Moscow
//USSR/Moscow
//========
//
//TEST2
//--------
//INPUT:
//24
//RENAME FakeCountry FarFarAway
//ABOUT FarFarAway
//DUMP
//CHANGE_CAPITAL TsardomOfRussia Moscow
//CHANGE_CAPITAL TsardomOfRussia Moscow
//CHANGE_CAPITAL ColonialBrazil Salvador
//CHANGE_CAPITAL TsardomOfRussia SaintPetersburg
//RENAME TsardomOfRussia RussianEmpire
//CHANGE_CAPITAL RussianEmpire Moscow
//CHANGE_CAPITAL RussianEmpire SaintPetersburg
//CHANGE_CAPITAL ColonialBrazil RioDeJaneiro
//DUMP
//RENAME ColonialBrazil EmpireOfBrazil
//ABOUT RussianEmpire
//RENAME EmpireOfBrazil UnitedStatesOfBrazil
//CHANGE_CAPITAL RussianEmpire Petrograd
//RENAME RussianEmpire RussianRepublic
//RENAME RussianRepublic USSR
//CHANGE_CAPITAL USSR Moscow
//CHANGE_CAPITAL UnitedStatesOfBrazil Brasilia
//RENAME UnitedStatesOfBrazil FederativeRepublicOfBrazil
//ABOUT RussianEmpire
//DUMP
//RENAME USSR USSR
//-------
//Incorrect rename, skip
//Country FarFarAway doesn't exist
//There are no countries in the world
//Introduce new country TsardomOfRussia with capital Moscow
//Country TsardomOfRussia hasn't changed its capital
//Introduce new country ColonialBrazil with capital Salvador
//Country TsardomOfRussia has changed its capital from Moscow to SaintPetersburg
//Country TsardomOfRussia with capital SaintPetersburg has been renamed to RussianEmpire
//Country RussianEmpire has changed its capital from SaintPetersburg to Moscow
//Country RussianEmpire has changed its capital from Moscow to SaintPetersburg
//Country ColonialBrazil has changed its capital from Salvador to RioDeJaneiro
//ColonialBrazil/RioDeJaneiro RussianEmpire/SaintPetersburg
//Country ColonialBrazil with capital RioDeJaneiro has been renamed to EmpireOfBrazil
//Country RussianEmpire has capital SaintPetersburg
//Country EmpireOfBrazil with capital RioDeJaneiro has been renamed to UnitedStatesOfBrazil
//Country RussianEmpire has changed its capital from SaintPetersburg to Petrograd
//Country RussianEmpire with capital Petrograd has been renamed to RussianRepublic
//Country RussianRepublic with capital Petrograd has been renamed to USSR
//Country USSR has changed its capital from Petrograd to Moscow
//Country UnitedStatesOfBrazil has changed its capital from RioDeJaneiro to Brasilia
//Country UnitedStatesOfBrazil with capital Brasilia has been renamed to FederativeRepublicOfBrazil
//Country RussianEmpire doesn't exist
//FederativeRepublicOfBrazil/Brasilia USSR/Moscow
//Incorrect rename, skip
//=========
//
//TEST3
//---------
//INPUT:
//10
//CHANGE_CAPITAL RussianEmpire Petrograd
//RENAME USSR RussianEmpire
//DUMP
//ABOUT USSR
//DUMP
//RENAME RussianEmpire RussianEmpire
//DUMP
//CHANGE_CAPITAL UnitedStatesOfBrazil Brasilia
//RENAME RussianEmpire UnitedStatesOfBrazil
//DUMP
//---------
//OUTPUT:
//Introduce new country RussianEmpire with capital Petrograd
//Incorrect rename, skip
//RussianEmpire/Petrograd
//Country USSR doesn't exist
//RussianEmpire/Petrograd
//Incorrect rename, skip
//RussianEmpire/Petrograd
//Introduce new country UnitedStatesOfBrazil with capital Brasilia
//Incorrect rename, skip
//RussianEmpire/Petrograd UnitedStatesOfBrazil/Brasilia
//*/