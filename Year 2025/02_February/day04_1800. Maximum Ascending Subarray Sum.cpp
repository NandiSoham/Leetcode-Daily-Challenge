// Problem Link -> https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

// ======================================= Approach - 1 ====================================

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int curSum = nums[i];

            for (int j = i + 1; j < n; j++) {
                
                if (nums[j] > nums[j - 1]) {
                    curSum += nums[j];
                    cout << curSum;
                } else
                    break;
            }

            maxSum = max(curSum, maxSum);
        }

        return maxSum;
    }
};



// Time Complexity -> O(n^2)
// Space Complexity -> O(1)

// =========================================================================================

// ======================================= Approach - 2 ====================================

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int curSum = nums[i];
            int j = i + 1;

            while(j < n && nums[j] > nums[j - 1]){
                curSum += nums[j];
                j++;
            }

            maxSum = max(curSum, maxSum);
        }

        return maxSum;
    }
};



// Time Complexity -> O(n^2)
// Space Complexity -> O(1)

// =========================================================================================

// ======================================= Approach - 3 ====================================

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum = 0;
        int curSum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                curSum += nums[i];
            } else {
                maxSum = max(curSum, maxSum);
                curSum = nums[i];
            }
        }

        return max(curSum, maxSum);
    }
}; 



// Time Complexity -> O(n)
// Space Complexity -> O(1)

// =========================================================================================
