class Solution {
public:
    bool isValid(string s) {

    stack <int> st;

    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        if(ch=='('||ch=='{'||ch=='[')
        st.push(ch);
        else
        {
        if(st.empty())
          return false;
        char last=st.top();
        st.pop();
        if(ch==')'&& last!='(') 
        return false;
        if(ch=='}'&& last!='{')
        return false;
        if(ch==']'&& last!='[')
        return false;


    }
    }
    return st.empty();

    }
    
};