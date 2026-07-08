class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> a;
        vector <int> b;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            b.push_back(nums[i]);
            else
            a.push_back(nums[i]);
        }
        int k=0;
        int l=0;
         for(int i=0;i<nums.size();i++)
         {
            if(i%2==0)
            {
              nums[i]=a[k];
              k++;
            }
            else
            {
                nums[i]=b[l];
                l++;

            }
         }
        return nums;
    }
};