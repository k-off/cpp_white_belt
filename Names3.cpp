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
//    Person(const std::string& fname, const std::string& lname, int year) {
//        first[year] = fname;
//        last[year] = lname;
//        birth = year;
//    }
//
//    void ChangeFirstName(int year, const std::string& first_name) {
//        if (year < birth) return;
//        first[year] = first_name;
//    }
//    void ChangeLastName(int year, const std::string& last_name) {
//        if (year < birth) return;
//        last[year] = last_name;
//    }
//    std::string GetFullName(int year) const {
//        if (year < birth) return "No person";
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
//    std::vector<std::string> getName(const std::map<int, std::string>& name, const int year) const {
//        std::vector<std::string> res = {};
//        for (const auto& n : name) {
//            if (n.first > year) break ;
//            res.insert(res.begin(), n.second);
//        }
//        return res;
//    }
//
//    std::string genString(const std::vector<std::string>& names) const {
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
//    std::string GetFullNameWithHistory(int year) const {
//        if (year < birth) return "No person";
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
//    std::map<int, std::string>  first;
//    std::map<int, std::string>  last;
//    int                         birth;
//};
//
//int main() {
//    Person person("Polina", "Sergeeva", 1960);
//    for (int year : {1959, 1960}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeFirstName(1965, "Appolinaria");
//    person.ChangeLastName(1967, "Ivanova");
//    for (int year : {1965, 1967}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    return 0;
//}
