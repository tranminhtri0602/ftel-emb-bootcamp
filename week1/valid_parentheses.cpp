#include <algorithm>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        // init the stack to store open brackets and get close brakets
        stack<char> st;

        // return variable to ensure this function has only one return
        bool result = true;

        // loop all elements of string
        for (int i = 0; i < s.size(); i++)
        {
            // store open brackets
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);

            // get close brackets
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
            {
                if (st.empty())
                    result = false;
                else if ((s[i] == ')') && (st.top() == '('))
                    st.pop();
                else if ((s[i] == ']') && (st.top() == '['))
                    st.pop();
                else if ((s[i] == '}') && (st.top() == '{'))
                    st.pop();
                else
                    result = false;
            }
            // invalid characters
            else
                result = false;
        }

        // ensure all elements have corresponding brackets
        if (!st.empty())
            result = false;

    return result;
    }
};

int main()
{
    // create object and test string
    Solution S;
    string s = "[";

    // call fucntion to confirm and print the result
    if(S.isValid(s))
        cout << "string is valid!" << endl;
    else
        cout << "string is invalid!" << endl;

    return 0;
}