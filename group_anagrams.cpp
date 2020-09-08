#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
                        
        unordered_map<string, vector<string>> gmap;
        
        for (auto &s:strs) {
            
            vector<char> c(s.begin(),s.end());

            sort(c.begin(), c.end()); 
            
            string k(c.begin(), c.end());
            
            auto r = gmap.find(k);
            if (r==gmap.end()) {
                vector<string> g;
                g.push_back(s);
                gmap.insert({k, move(g)});
            }
            else {
                r->second.push_back(s);
            }
        }

        vector<vector<string>> ans;
        for (auto &m:gmap) {
            ans.push_back(m.second);
        }

        return ans;
    }
};

int main() {

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};    
    //vector<string> strs = {""};    
    //vector<string> strs = {"a"};    

    Solution s;
    auto ans = s.groupAnagrams(strs);
    for (auto g:ans) {
        cout << "[";

        for (auto s:g) {
            cout << s << " ";
        }
        cout << "]" << endl;
    }
}