#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // init temp array to store result
        vector<int> temp;

        // add m members of nums1 to temp
        for (int i = 0; i < m; i++)
        {
            temp.push_back(nums1.at(i));
        }

        // add n members of nums2 to temp
        for (int i = 0; i < n; i++)
        {
            temp.push_back(nums2.at(i));
        }

        // assign temp to nums1 and sort non-decreasing order
        nums1 = temp;
        sort(nums1.begin(), nums1.end());

        // resize nums1 and nums2 to ensure requirement
        nums1.resize(m+n);
        nums2.resize(0);
    }
};

int main()
{
    // create object
    Solution S;

    // init two array and m,n  as requirement, example case 1
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    // print intput
    cout << "Input:" << endl;
    cout << "nums1 = {1,2,3,0,0,0};" << " m = 3" << endl;
    cout << "nums2 = {2,5,6};" << " n = 3" << endl;

    // call funcion to merge nums1 and nums2
    S.merge(nums1, m, nums2, n);

    // print result
    cout << endl << "Output:" << endl;
    cout << "nums1 = {";
    for (int i = 0; i < (m+n); i++)
    {
        cout << nums1.at(i);

        if (i < (m+n-1))
        {
            cout << ",";
        }
    }
    m = m + n;
    cout << "}; " << "m = " << m << endl;

    return 0;
}
