#include <iostream>
#include <map>
#include <utility>


using namespace std;

//typedef std::pair<std::string,std::string> pair;



int main()
{
    //std::map<pair,int> map;

    // std::map<pair,int> map =
    // {
    //     { std::make_pair("C++", "C++14"), 2014 },
    //     { std::make_pair("C++", "C++17"), 2017 },
    //     { std::make_pair("Java", "Java 7"), 2011 },
    //     { std::make_pair("Java", "Java 8"), 2014 },
    //     { std::make_pair("C", "C11"), 2011 }
    // };

    // for (const auto &entry: map)
    // {
    //     auto key_pair = entry.first;
    //     std::cout << "{" << key_pair.first << "," << key_pair.second << "}, "
    //               << entry.second << '\n';
    // }
    cout << sizeof(long) << endl;
    cout << sizeof(int) << endl;

    return 0;
}