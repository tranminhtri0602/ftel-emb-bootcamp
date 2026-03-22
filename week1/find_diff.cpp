#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {

        sort (s.begin(), s.end());
        sort (t.begin(), t.end());

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
                return t[i];
        }

        return t[t.size() - 1];
    }
};

int main()
{
    Solution S;
    string s = {"aabc"};
    string t = {"acbae"};

    cout << "string difference is: " << S.findTheDifference(s, t) << endl;
    
    return 0;
}