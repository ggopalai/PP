#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {

    stack<char> brac;
    for(int i = 0; i < s.length(); i++)
    {
        int flag = 0;
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            brac.push(s[i]);
        else if (s[i] == '}')
        {
            if(brac.empty()) // finding closing bracket before getting opening bracket
                return "NO";
            char z = brac.top();
            brac.pop();
            if(z != '{')  //wrong order
                return "NO";
        }
        else if (s[i] == ')')
        {
            if(brac.empty())
                return "NO";
            char z = brac.top();
            brac.pop();
            if(z != '(')
                return "NO";
        }
        else
        {
            if(brac.empty())
                return "NO";
            char z = brac.top();
            brac.pop();
            if(z != '[')
                return "NO";
        }
    }

    if(brac.empty()) // unmatched brackets 
        return "YES";
    else
        return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
