//#include <string>
//#include <vector>
//#include <iostream>
//#include <set>
//#include <algorithm>
//
//class SortedStrings {
//public:
//    void AddString(const std::string& s) {
//        ss.push_back(s);
//        isSorted = false;
//    }
//    std::vector<std::string> GetSortedStrings() {
//        if (!isSorted) {
//            std::sort(ss.begin(), ss.end());
//            isSorted = true;
//        }
//        return ss;
//    }
//private:
//    bool isSorted;
//    std::vector<std::string> ss;
//};

//void PrintSortedStrings(SortedStrings& strings) {
//    for (const std::string& s : strings.GetSortedStrings()) {
//        std::cout << s << " ";
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    SortedStrings strings;
//
//    strings.AddString("first");
//    strings.AddString("third");
//    strings.AddString("second");
//    PrintSortedStrings(strings);
//
//    strings.AddString("second");
//    PrintSortedStrings(strings);
//
//    return 0;
//}