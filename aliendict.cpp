#include<iostream>
#include<unordered_set>
#include<map>
#include<string>
#include<vector> 

using namespace std;

class Solution {

public:
    string alienOrder(vector<string>& words) {
        string ret;
        if (words.size()==1) {
            unordered_set<char> seen;
            for (auto c:words[0]) {
                if (seen.count(c)==0) {
                    seen.insert(c);
                    ret=ret+c;
                }
            }
        }
        
        map<char, char> order;
        for (int i=0; i<words.size()-1; i++) {
            for (int j=0; j<min(words[i].length(), words[i+1].length()); j++) {
                if (words[i][j]!=words[i+1][j]) {
                    order.insert({words[i][j],words[i+1][j]});
                }
            }
        }
        
        return "";
    }
};

int main() {
    Solution s;
    auto ret = s.alienOrder({ "wrt",
  "wrf",
  "er",
  "ett",
  "rftt"});
   cout << ret << endl;
}