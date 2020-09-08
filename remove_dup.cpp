#include <vector>
#include <iostream>

using namespace std;

// Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

class Solution {
    
    int erase2(vector<int>& nums, int first, int last, int len) {
        int p = first;
        for (int i=last+1; i<len; i++) {
            nums[p] = nums[i];
            p++;
        }
        return len - (last-first + 1);
    }
    
public:
    int removeDuplicates(vector<int>& nums) { 
        
        //no repeat possible
        if (nums.size()<2) return nums.size();
        
        int len = nums.size();
        
        //both tain and head points to the end of the string
        int t = len - 1;
        int h = t;
                
        while(t>0) {
            //detected repeat, move the head pointer to left by 1 until
            //no repeat or head is 0
            while((h>0 && nums[t]==nums[h-1])) h--;
            
            //delete the repeating elements
            if (t>h) {
                len = erase2(nums, h + 1, t, len);
                t = len - 1;
                h = t;
            }
            else {
                h--;
                t--;
            }
        }
        
        return len;
    }
};

int main() {

    vector<int> nums = {1,1,2,3,4,4,4};    
    //vector<string> strs = {""};    
    //vector<string> strs = {"a"};    

    Solution s;
    auto ans = s.removeDuplicates(nums);
    // for (auto g:ans) {
    //     cout << "[";

    //     for (auto s:g) {
    //         cout << s << " ";
    //     }
    //     cout << "]" << endl;
    // }
}