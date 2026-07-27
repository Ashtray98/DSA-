class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]!=1)
              j=0;
            else
             j++;

             if(k<j)
            {
                k=j;
            }
        }   
        return k;
        
    }
};