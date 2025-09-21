class Solution {
public:
bool ismatch(char open,char cl)
{
    return ((open=='(' && cl==')')||(open=='[' && cl==']')||(open=='{' && cl=='}')); 
}
    bool isValid(string s) {
        stack<int>st;
        for(char c:s)
        {
            if(c=='(' || c=='['||c=='{')
            {
                st.push(c);
            }
            else{
                if(!st.empty()&& ismatch(st.top(),c))
                {
                    st.pop();
                }
                else
                {
                  return false;
                }
                
            }
        }
        return st.empty();
        
    }
};