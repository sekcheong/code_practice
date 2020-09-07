#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {

    vector<vector<int>> twoSum(vector<int>& nums, unordered_multimap<int,int>& mmap, unordered_set<int> &excl, int target) {
        vector<vector<int>> ans;        
        for (int i=0; i<nums.size(); i++) {
            if (excl.find(i)!=excl.end()) continue;
            int c = target - nums[i];
            auto r = mmap.equal_range(c);
            for (auto x=r.first; x!=r.second; ++x) {
                if (excl.find(x->second)!=excl.end()) continue;
                excl.insert(x->second);
                cout << "[" << i << "," << x->second << "]" << endl;
            }            
        }        
        return ans;
    }

    void print_map(unordered_multimap<int,int> &mmap) {
        for (auto &n:mmap) {
            cout << "(" << n.first << "," << n.second << ")" << endl;
        }
    }

public:    
    
    vector<vector<int>> threeSum(vector<int>& nums) {

        //create a index for all the numbers 
        unordered_multimap<int,int> mmap;        
        for (int i=0; i<nums.size(); i++) {
            mmap.insert({nums[i], i});
        }

        print_map(mmap);
        
        vector<vector<int>> ans;
        //for each number find a two sum
        for (int i=0; i<nums.size(); i++) {
            unordered_set<int> excl;
            excl.insert(i);
            int target = -nums[i];
            cout << "i=" << i << endl;
            auto ts = twoSum(nums, mmap, excl, target);
        //     for (auto &v:ts) {
        //          vector<int> q(3);
        //          q[0]=nums[i];
        //          q[1]=v[0];
        //          q[2]=v[1];
        //          ans.push_back(move(q));
        //     }
        }
        
        return ans;
    }
};


int main() {
    Solution s;
    vector<int> c = {-1,0,1,2,-1,-4};
    auto x = s.threeSum(c);
    for (auto a:x) {
        for (auto i:a) {
            cout << i << ",";
        }
        cout << endl;
    }
}