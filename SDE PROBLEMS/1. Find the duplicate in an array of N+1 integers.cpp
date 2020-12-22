/*  

FIND THE DUPLICATE IN AN ARRAY OF N + 1 INTEGERS: https://leetcode.com/problems/find-the-duplicate-number/

BRUTE: SORTING ALGORITHM => TIME: O(N LOG N) | SPACE: O(1)

BETTER: HASHING => TIME: O(N) | SPACE: O(N)

OPTIMAL: LINKED LIST - CYCLE METHOD / TORTOISE METHOD => TIME: O(N) | SPACE: O(1) 

*/ 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            
        int slow = nums[0];
        int fast = nums[0];
        
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);
        
        slow = nums[0];
        
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
        
    }
};
