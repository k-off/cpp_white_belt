//#include <string>
//#include <iostream>
//
//class ReversibleString {
//
//public:
//
//	ReversibleString() { _s = {}; }
//
//	ReversibleString(const std::string& s) { _s = s; }
//
//	void Reverse() {
//		_s = { _s.rbegin(), _s.rend() };
//	}
//
//	std::string ToString() const {
//		return _s;
//	}
//
//private:
//
//	std::string _s;
//
//};

//int main() {
//	ReversibleString s("live");
//	s.Reverse();
//	std::cout << s.ToString() << std::endl;
//
//	s.Reverse();
//	const ReversibleString& s_ref = s;
//	std::string tmp = s_ref.ToString();
//	std::cout << tmp << std::endl;
//
//	ReversibleString empty;
//	std::cout << '"' << empty.ToString() << '"' << std::endl;
//
//	return 0;
//}