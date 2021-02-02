class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int init_len = nums.size();
        
        for(int i = 0; i < init_len; i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                init_len--;
                i--;
            }
        }
        return nums.size();
    }
};

/* 27. Remove-Element.cpp
//////////////////////////////////////////////////
Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

https://leetcode.com/problems/remove-element/
//////////////////////////////////////////////////
*/
