/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   database.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/28 16:49:25 by pacovali      #+#    #+#                 */
/*   Updated: 2020/04/30 15:21:36 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Date {
public:
	Date(int new_year, int new_month, int new_day) {
		if (new_month < 1 || new_month > 12) {
			throw runtime_error("Month value is invalid: "
								+ to_string(new_month));
		}
		if (new_day < 1 || new_day > 31) {
			throw runtime_error("Day value is invalid: "
								+ to_string(new_day));
		}
		year = new_year;
		month = new_month;
		day = new_day;
	}
	friend ostream &operator<<(ostream &output, const Date& d) {
		output << setw(4) << setfill('0') << d.year << '-';
		output << setw(2) << setfill('0') << d.month << '-';
		output << setw(2) << setfill('0') << d.day;
	   return output;
	}
	int GetYear(void) const {
		return (year);
	}
	int GetMonth(void) const {
		return (month);
	}
	int GetDay(void) const {
		return (day);
	}
	bool operator<(const Date& rhs) const {
		return (vector<int>{year, month, day} <
				vector<int>{rhs.GetYear(), rhs.GetMonth(), rhs.GetDay()});
	}
private:
	int			year;
	int			month;
	int			day;
};

class Database {
public:
	void AddEvent(const Date& date, const string& event) {
		database[date].insert(event);
	}

	bool DeleteEvent(const Date& date, const string& event){
		if (database.count(date) && database[date].count(event)) {
			return(database.at(date).erase(event));
		}
		return (false);
	}

	int  DeleteDate(const Date& date) {
		if (database.count(date)) {
			int size = (int)database[date].size();
			database.erase(date);
			return (size);
		}
		return (0);
	}

	set<string> Find(const Date& date) const {
		if (database.count(date)) {
			return (database.at(date));
		}
		return {};
	}

	void Print() const {
		for (const auto& line : database) {
			for (const auto& entry : line.second) {
				cout << line.first << ' ' << entry << endl;
			}
		}
	}
private:
	map<Date, set<string>> database;
};

Date	get_date(string s) {
	vector<int>		n = {0, 0, 0};
	istringstream	ss(s);
	bool			check = true;

	check = check && (ss >> n[0]);
	check = check && (ss.peek() == '-');
	ss.ignore(1);
	
	check = check && (ss >> n[1]);
	check = check && (ss.peek() == '-');
	ss.ignore(1);
	
	check = check && (ss >> n[2]);
	check = check && ss.eof();
	
	if (!check) {
		throw runtime_error("Wrong date format: " + s);
	}

	return (Date(n[0], n[1], n[2]));
}

int main() {
	Database db;
	
	string input;
	while (getline(cin, input)) {
		if (input.size() < 1) {
			continue ;
		} else try{
			stringstream		ss(input);
			vector<string>	tokens;
			string			token;
			while (getline(ss, token, ' ')) {
				if (token.size()) {
					tokens.push_back(token);
				}
			}
			if (tokens.size() < 1 || tokens.size() > 3) {
				throw runtime_error("Unknown command: " + tokens[0]);
			} else {
				if (tokens[0] == "Print") {
					db.Print();

				} else if (tokens[0] == "Find") {
					for (const string& s : db.Find(get_date(tokens[1]))) {
						cout << s << endl;
					}

				} else if (tokens[0] == "Del") {
					if (tokens.size() == 2) {
						int		count = db.DeleteDate(get_date(tokens[1]));
						cout << "Deleted " << count << " events\n";
					} else if (tokens.size() == 3) {
							if (db.DeleteEvent(get_date(tokens[1]), tokens[2]))
							{
								cout << "Deleted successfully\n";
							} else {
								cout << "Event not found\n";
							}
					}

				} else if (tokens[0] == "Add") {
						db.AddEvent(get_date(tokens[1]), tokens[2]);
				} else {
					throw runtime_error("Unknown command: " + tokens[0]);
				}
			}
		} catch (const runtime_error& e) {
			cout << e.what() << endl;
			exit(0);
		}
	}
	return 0;
}
