//#include <vector>
//#include <iostream>
//#include <string>
//
///**
//* People stay in a queue which never moves, they can leave it only from the back 
//* Some people could become worried because the queue is still
//* There are following operations over the queue
//
//* WORRY	i:	mark i-th person as worried
//* QUIET	i:	mark i-th person as quiet
//* COME	k:	add k people to the queue
//* COME	-k:	remove k people from the queue
//* WORRY_COUNT: count worried people in the queue
//
//* INPUT: n - number of commands, followed by n commands
//* for commands WORRY i and QUIET i it is quaranteed tha i-th person is in the queue
//* for command COME -k it is quaranteed that queue size is at least k 
//
//* OUTPUT: a single number - amount of worried people in the queue
//*/
//
//int main(void) {
//	std::vector<bool> q;
//	std::string command;
//	int n, val = 0;
//
//	std::cin >> n;
//	for (int i = 0; i < n; ++i) {
//		std::cin >> command;
//		if (command == "WORRY_COUNT") {
//			int count = 0;
//			for (auto i : q) count += i;
//			std::cout << count << std::endl;
//		}
//		else {
//			std::cin >> val;
//			if (command == "WORRY") q[val] = true;
//			else if (command == "QUIET") q[val] = false;
//			else if (command == "COME") q.resize(q.size() + val);
//		}
//	}
//}