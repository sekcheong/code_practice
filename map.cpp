#include <iostream>
#include <map>
 
int main()
{
    std::map<int,char> example = {{1,'a'},{2,'b'}};
 
    if(example.contains(2)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }
}