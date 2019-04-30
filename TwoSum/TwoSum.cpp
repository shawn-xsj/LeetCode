//***********************
//my solution
//************************

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0; i<=nums.size()-1;i++){
            for(int j = nums.size()-1;j>=0;j--){
            if(nums[i]+nums[j]==target && i<j){
                    result.push_back(i);
                    result.push_back(j);
                
            }
            else{
                continue;
            }
                    

            }         

        }
        return result;
        
    }
};