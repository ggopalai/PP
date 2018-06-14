/*
Given a vector of strings, evaluate the expression.;
Done using stacks.
*/

class Solution {
public:
    int evalRPN(vector<string>& token) {

        stack<int> s;
        int sum = 0;

        for(int i = 0; i < token.size(); i++)
        {
            if(token[i].compare("+") == 0 || token[i].compare("-") == 0 || token[i].compare("*") == 0 || token[i].compare("/") == 0)
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                if(token[i].compare("+") == 0)
                    s.push(a+b);
                else if(token[i].compare("-") == 0)
                    s.push(b - a);
                else if(token[i].compare("*") == 0)
                    s.push(a*b);
                else
                    s.push(b/a);
            }
            else
            {
                s.push(stoi(token[i]));

            }
        }

        int res = s.top();

        return res;

    }
};
