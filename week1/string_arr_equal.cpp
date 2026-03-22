#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        // define two temp string to compare
        string temp1, temp2;

        // append string1
        for (int i = 0; i < word1.size(); i++)
        {
            temp1 += word1[i];
        }

        // append string2
        for (int i = 0; i < word2.size(); i++)
        {
            temp2 += word2[i];
        }

        // compare and return result
        if (temp1 == temp2)
            return true;
        else 
            return false;
    }
};

int main()
{
    // create object and two string input
    Solution S;
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    // call function to do requirement
    if (S.arrayStringsAreEqual(word1, word2))
        cout << "two strings are equal" << endl;
    else
        cout << "two strings are not equal" << endl;

    return 0;
}