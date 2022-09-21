// 985. Sum of Even Numbers After Queries

// You are given an integer array nums and an array queries where queries[i] = [vali, indexi].
// For each query i, first, apply nums[indexi] = nums[indexi] + vali, then print the sum of the even values of nums.
// Return an integer array answer where answer[i] is the answer to the ith query.

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> answer;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0){
                sum += nums[i];
            }
        }
        int n = queries.size();
        for(int i=0; i<n; i++){
            if(nums[queries[i][1]]%2 == 0){
                sum -= nums[queries[i][1]];
            }
            nums[queries[i][1]] += queries[i][0];
            if(nums[queries[i][1]]%2 == 0){
                sum += nums[queries[i][1]];
            }
            answer.push_back(sum);
        }
        return answer;
    }
};
