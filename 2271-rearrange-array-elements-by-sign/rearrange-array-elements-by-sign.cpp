class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
        int a=0;
        int b=1;
        vector <int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
              v[b]=nums[i];
              b=b+2;
            }
            else
            {
                v[a]=nums[i];
                a=a+2;
            }
            
        }
         
        return v;
    }
};