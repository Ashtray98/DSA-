class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int c=0;
        int n=nums.size();
        vector <int> temp;
          for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        c++;
        else
        temp.push_back(nums[i]);

    }
    for(int i=0;i<c;i++)
    {
        temp.push_back(0);
    }
    for(int i=0;i<n;i++)
    {
        nums[i]=temp[i];
    }
    
    for(auto it:nums)
    {
        cout<<it<<" ";
    }

        
    }
};