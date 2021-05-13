//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <iostream>
//
//class Person {
//public:
//    void ChangeFirstName(int year, const std::string& first_name) {
//        first[year] = first_name;
//    }
//    void ChangeLastName(int year, const std::string& last_name) {
//        last[year] = last_name;
//    }
//    std::string GetFullName(int year) {
//        std::string fname = "unknown";
//        std::string lname = "unknown";
//        std::string res = "Incognito";
//        for (const auto& f : first) {
//            if (f.first <= year) {
//                fname = f.second;
//            }
//            else {
//                break ;
//            }
//        }
//        for (const auto& l : last) {
//            if (l.first <= year) {
//                lname = l.second;
//            }
//            else {
//                break;
//            }
//        }
//        if (fname == "unknown") {
//            if (lname != "unknown") {
//                res = lname + " with unknown first name";
//            }
//        }
//        else {
//            if (lname == "unknown") {
//                res = fname + " with unknown last name";
//            }
//            else {
//                res = fname + " " + lname;
//            }
//        }
//        return res;
//    }
//private:
//    std::map<int, std::string> first;
//    std::map<int, std::string> last;
//};
//
//
//int main() {
//    Person person;
//
//    person.ChangeFirstName(1965, "Polina");
//    person.ChangeLastName(1967, "Sergeeva");
//    for (int year : {1900, 1965, 1990}) {
//        std::cout << person.GetFullName(year) << std::endl;
//    }
//
//    person.ChangeFirstName(1970, "Appolinaria");
//    for (int year : {1969, 1970}) {
//        std::cout << person.GetFullName(year) << std::endl;
//    }
//
//    person.ChangeLastName(1968, "Volkova");
//    for (int year : {1969, 1970}) {
//        std::cout << person.GetFullName(year) << std::endl;
//    }
//
//    return 0;
//}