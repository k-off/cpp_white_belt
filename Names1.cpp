#include <string>
#include <vector>
#include <set>
#include <map>
#include <iostream>

class Person {
public:
    void ChangeFirstName(int year, const std::string& first_name) {
        first[year] = first_name;
    }
    void ChangeLastName(int year, const std::string& last_name) {
        last[year] = last_name;
    }
    std::string GetFullName(int year) {
        std::string fname = "unknown";
        std::string lname = "unknown";
        std::string incognito = "incognito";
        for (const auto& f : first) {

        }

    }
private:
    std::map<int, std::string> first;
    std::map<int, std::string> last;
};


int main() {
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        std::cout << person.GetFullName(year) << std::endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullName(year) << std::endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        std::cout << person.GetFullName(year) << std::endl;
    }

    return 0;
}