//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <iostream>
//
//using namespace std;
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
//                break;
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
//    
//    std::vector<std::string> getName(const std::map<int, std::string>& name, const int year) {
//        std::vector<std::string> res = {};
//        for (const auto& n : name) {
//            if (n.first > year) break ;
//            res.insert(res.begin(), n.second);
//        }
//        return res;
//    }
//
//    std::string genString(const std::vector<std::string>& names) {
//        std::string res = "";
//        int counter = 0;
//        for (int i = 0; i < names.size(); ++i) {
//            res += names[i];
//            ++counter;
//            while (i < names.size() - 1 && names[i] == names[i + 1]) ++i;
//            if (i < names.size() - 1) {
//                res += (counter > 1 ? ", " : " (");
//            }
//            else {
//                res += (counter > 1 ? ")" : "");
//            }
//        }
//        return res;
//    }
//
//    std::string GetFullNameWithHistory(int year) {
//        std::vector<std::string> fnames = getName(first, year);
//        std::vector<std::string> lnames = getName(last, year);
//        std::string res = "Incognito";
//        if (fnames.size()) {
//            res = genString(fnames);
//            if (lnames.size()) {
//                res += " " + genString(lnames);
//            }
//            else {
//                res += " with unknown last name";
//            }
//        }
//        else if (lnames.size()) {
//            res = genString(lnames) + " with unknown first name";
//        }
//        return res;
//    }
//
//private:
//    std::map<int, std::string> first;
//    std::map<int, std::string> last;
//};

//int main() {
//    Person person;
//
//    //person.ChangeFirstName(1900, "Eugene"); 
//    //person.ChangeFirstName(1901, "Eugene");
//    //person.ChangeLastName(1900, "Sokolov");
//    //person.ChangeLastName(1910, "Sokolov");
//    //person.ChangeLastName(1911, "Sokol");
//    //person.ChangeLastName(1912, "Sokol");
//    person.ChangeFirstName(1920, "Evgeny");
//    person.ChangeFirstName(1921, "Evgeny");
//    person.ChangeLastName(1930, "Sokolov");
//    person.ChangeLastName(1931, "Sokolov");
//    person.ChangeLastName(1932, "Petrov");
//    person.ChangeLastName(1932, "Petrov");
//    //person.ChangeFirstName(1930, "Eugene");
//    //person.ChangeFirstName(1931, "Eugene");
//    cout << person.GetFullNameWithHistory(1940) << endl;
//
//    return 0;
//}

//int main() {
//    Person person;
//
//    person.ChangeFirstName(1965, "Polina");
//    person.ChangeLastName(1967, "Sergeeva");
//    for (int year : {1900, 1965, 1990}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeFirstName(1970, "Appolinaria");
//    for (int year : {1969, 1970}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeLastName(1968, "Volkova");
//    for (int year : {1969, 1970}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeFirstName(1990, "Polina");
//    person.ChangeLastName(1990, "Volkova-Sergeeva");
//    cout << person.GetFullNameWithHistory(1990) << endl;
//
//    person.ChangeFirstName(1966, "Pauline");
//    cout << person.GetFullNameWithHistory(1966) << endl;
//
//    person.ChangeLastName(1960, "Sergeeva");
//    for (int year : {1960, 1967}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeLastName(1961, "Ivanova");
//    cout << person.GetFullNameWithHistory(1967) << endl;
//
//    return 0;
//}

//int main() {
//    Person person;
//
//    person.ChangeFirstName(1965, "Polina");
//    person.ChangeFirstName(1965, "Appolinaria");
//
//    person.ChangeLastName(1965, "Sergeeva");
//    person.ChangeLastName(1965, "Volkova");
//    person.ChangeLastName(1965, "Volkova-Sergeeva");
//
//    for (int year : {1964, 1965, 1966}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    return 0;
//}
