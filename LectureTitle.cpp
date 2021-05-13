//#include <string>
//#include <iostream>
//
//struct Specialization {
//	explicit Specialization(const std::string& s) {
//		value = s;
//	}
//	std::string value;
//};
//
//struct Course {
//	explicit Course(const std::string& s) {
//		value = s;
//	}
//	std::string value;
//};
//
//struct Week {
//	explicit Week(const std::string& s) {
//		value = s;
//	}
//	std::string value;
//};
//
//struct LectureTitle {
//	explicit LectureTitle(const Specialization& s, const Course& c, const Week& w) {
//		specialization = s.value;
//		course = c.value;
//		week = w.value;
//	}
//	std::string specialization;
//	std::string course;
//	std::string week;
//};
//
//int main() {
//	LectureTitle title0( Specialization("C++"), Course("White belt"), Week("4th") );
//	LectureTitle title1("C++", "White belt", "4th");
//	LectureTitle title2(std::string("C++"), std::string("White belt"), std::string("4th"));
//	LectureTitle title3 = { "C++", "White belt", "4th" };
//	LectureTitle title4 = { {"C++"}, {"White belt"}, {"4th"} };
//	LectureTitle title5( Course("White belt"), Specialization("C++"), Week("4th") );
//	LectureTitle title6( Specialization("C++"), Week("4th"), Course("White belt") );
//
//	return 0;
//}