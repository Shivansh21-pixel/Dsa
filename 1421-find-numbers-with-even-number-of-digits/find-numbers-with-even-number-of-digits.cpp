class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even=0;

        for(int i=0;i<n;i++){
            int h=0;
                while(nums[i]!=0){
                    h++;
                    nums[i]/=10;
                }
                if(h%2==0){
                    even++;
                }
        }
        return even;
    }
};