/* 

SORT AN ARRAY OF 0S 1S 2S WITHOUT USING EXTRA SPACE OR SORTING ALGO: https://leetcode.com/problems/sort-colors/

BRUTE: SORTING => TIME: O(N LOG N) | SPACE: O(1)

BETTER: COOUNTING SORT => TIME: O(N) + O(N) = O(2N) | SPACE: O(N)

OPTIMAL: DUTCH NATIONAL FLAG ALGORITHM => TIME: O(N) | SPACE: 0(1)

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while(mid <= high){
            
            switch(nums[mid]){
                    
                case 0: 
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
                    
            }
        }
        
    }
};