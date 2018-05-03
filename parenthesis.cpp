class Solution {
public:
    bool isValid(string s) {

        int flag = 0;
        if(s.length() == 1)
            return false;
        stack<char> l;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
                l.push(s[i]);
            else if (s[i] == '}')
            {
                if(l.empty())
                    return false;
                char x = l.top();
                l.pop();
                if(x == '{')
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                if(l.empty())
                    return false;
                char x = l.top();
                l.pop();
                if(x == '[')
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if(l.empty())
                    return false;
                char x = l.top();
                l.pop();
                if(x == '(')
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(!l.empty())
            flag = 1;
        if(flag == 1)
            return false;
        else
            return true;
    }
};
