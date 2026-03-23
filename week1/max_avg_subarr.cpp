#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        // create avg_arr to store avg k elements from nums
        vector<double> avg_arr;
        double sum = 0;

        // sum k elements from nums
        for (int i = 0; i < k; i++){
            sum += nums[i];
        }

        for (int i = 0; i < (nums.size() - k + 1); i++)
        {
            if (i != 0)
                sum = sum - nums[i - 1] + nums[i + k - 1];

            // store avg of k elements
            avg_arr.push_back(sum/k);
        }

        // find max element of avg arr and return it
        auto it = max_element(avg_arr.begin(), avg_arr.end());

        return *it;
    }
};

int main()
{
    // create object and input params
    Solution S;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    // call function and print result
    double max_avg = S.findMaxAverage(nums, k);
    cout << "Maximum average is: " << max_avg << endl;

    return 0;
}