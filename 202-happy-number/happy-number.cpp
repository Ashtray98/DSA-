class Solution {
public:
        set <int> visited={-1};
        int sumofsquare(int n)
        {
            int sum=0;
            while(n>0)
            {
                sum=sum+(n%10)*(n%10);
                n=n/10;
            }
            return sum;
        }

        

    bool isHappy(int n) {
            
            

            if(n==1)
             return true;
            else if(visited.count(n))
            {
                return false;
            }
            else 
              visited.insert(n);
              return isHappy(sumofsquare(n));
        
    }
};