#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        // create array to store result 
        vector<bool> result;

        // find max element
        auto it = max_element(candies.begin(), candies.end());

        // loop for all elements
        for (int i = 0; i < candies.size(); i++)
        {
            // check if candies is greatest
            if ((candies[i] + extraCandies) >= *it)
                result.push_back(true);
            else
                result.push_back(false);
        }

        return result;
    }
};

int main()
{
    // create object and input
    Solution S;
    vector<int> candies = {2, 3, 5};
    int extraCandies = 1;

    // get result return by function call
    vector<bool> result = S.kidsWithCandies(candies, extraCandies);

    // print result
    cout << "result: [";
    for (int i = 0; i < result.size(); i++)
    {
        if(result[i])
            cout << "true";
        else
            cout << "false";

        if (i < (result.size() - 1))
            cout <<  ", ";
    }
    cout << "]" << endl;

    return 0;
}