class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count=0;
               // i++;
            }
            if(nums[i]!=0){
                count++;
               // i++;
            }
            if(count>ans){
                ans=count;
            }

        }
        return ans;
    }
};