class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map <int,int> hash;
        for(int i=0;i<nums.size();i++)
        { 
           hash[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++)
        {
            if (auto it = hash.find(target-nums[i]); it != hash.end()&&it->second != i)
             {
        
               return {i,hash[target-nums[i]]};
        }
        }
        return {};

            }
                
};