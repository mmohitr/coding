/* 

REPEAT AND MISSING NUMBER: https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

BRUTE: SORTING => TIME: O(N LOG N) + 0(N) | SPACE: O(1)

BETTER: HASHING => TIME: O(N) + O(N) = O(2N) | SPACE: O(N)

OPTIMAL #1: EQUATIONS USING SUM AND SUM OF SQUARES => TIME: O(N) | SPACE: O(1)

OPTIMAL #2: XOR METHOD => TIME: O(5N) | SPACE: O(1)

*/

vector<int>repeatedNumber(const vector<int> &A) {
    long long int len = A.size();
    long long int Sum_N = (len * (len+1) ) / 2, Sum_NSq = (len * (len +1) *(2*len +1) )/ 6;
    long long int missingNumber = 0, repeating = 0;
     
    for(int i = 0; i < A.size(); i++) {
       Sum_N -= (long long int)A[i];
       Sum_NSq -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (Sum_N + Sum_NSq/Sum_N) / 2;
    repeating = missingNumber - Sum_N;

    vector<int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);
    return ans; 
}