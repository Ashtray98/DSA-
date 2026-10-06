class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector <int> result;
        for(int i=0;i<nums1.size();i++)
        {
            int el=nums1[i];
            int c=0;
            int c2=0;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==el)
                  c++;
                if(c==1&&nums2[j]>el)
                {
                    result.push_back(nums2[j]);
                    c2++;
                    break;
                  
                }
            }
            if(c2==0)
            {
                result.push_back(-1);
            }
        }
        return result;


        
    }
};