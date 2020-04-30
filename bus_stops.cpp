/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bus_stops.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/25 18:00:19 by pacovali      #+#    #+#                 */
/*   Updated: 2020/04/30 12:00:48 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int		read_int(void) {
	int		n;
	cin >> n;
	return (n);
}

string	read_string(void) {
	string	s;
	cin >> s;
	return (s);
}

void	new_bus(map<string, vector<string>>& routes) {
	string						bus = read_string();
	int							stop_count = read_int();
	
	routes["buses"].push_back(bus);
	while (stop_count--) {
		string					stop = read_string();
		routes[bus].push_back(stop);
		routes[stop].push_back(bus);
	}
}

void	buses_for_stop(map<string, vector<string>>& routes, string stop = "", \
					   string bus = "") {
	if (stop.size() < 1) {
		stop = read_string();
		if (routes[stop].size() < 1) {
			cout << "No stop\n";
		} else if (routes[stop].size() >= 1) {
			for (auto i : routes[stop]) {
				cout << i << " ";
			}
			cout << endl;
		}
	} else {
		if (routes[stop].size() < 1) {
			cout << "No stop\n";
		} else if (routes[stop].size() > 1) {
			cout << "Stop " << stop << ":";
			for (auto i : routes[stop]) {
				if (i != bus) {
					cout << " " << i;
				}
			}
			cout << endl;
		} else {
			cout << "Stop " << stop << ": no interchange\n";
		}
	}
}

void	stops_for_bus(map<string, vector<string>>& routes, string bus = "") {
	if (bus.size() < 1) {
		bus = read_string();
		if (routes[bus].size() < 1) {
			cout << "No bus\n";
		} else {
			for (auto i : routes[bus]) {
				buses_for_stop(routes, i, bus);
			}
		}
	} else {
		if (routes[bus].size() < 1) {
			cout << "No bus\n";
		} else {
			cout << "Bus " << bus << ":";
			for (auto i : routes[bus]) {
				cout << " " << i;
			}
			cout << endl;
		}
	}
}

void	all_buses(map<string, vector<string>>& routes) {
	vector<string> 				buses = routes["buses"];
	
	if (buses.size() < 1) {
		cout << "No buses\n";
	} else {
		sort(buses.begin(), buses.end());
		for (auto i : buses) {
			stops_for_bus(routes, i);
		}
	}
}

int		main(void) {
	int							count = read_int();
	map<string, vector<string>> routes;
	
	while (count) {
		string 					command = read_string();
		count--;
		if (command == "NEW_BUS") {
			new_bus(routes);
		} else if (command == "BUSES_FOR_STOP") {
			buses_for_stop(routes);
		} else if (command == "STOPS_FOR_BUS") {
			stops_for_bus(routes);
		} else if (command == "ALL_BUSES") {
			all_buses(routes);
		}
	}
	return (0);
}
