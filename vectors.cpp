#include <vector>
#include <iostream>
using namespace std;

int main()
{

    // vector<int> vec = {1, 2, 3};
    // vector<int> statics(3, 0);

    // for (int i : vec)
    // {
    //     cout << i << endl;
    // }

    // cout << vec.size() << endl;

    // vector<int> arr;

    // arr.push_back(10);
    // arr.push_back(11);
    // arr.push_back(2);
    // arr.push_back(2);
    // arr.push_back(2);

    // cout << arr.size() << arr.capacity() << endl;

    // Single number problem 136 leetcode

    // vector<int> nums = {4, 2, 3, 3, 2};
    // int ans = 0;
    // for (int i : nums)
    // {
    //     ans = ans | i;
    // }

    // cout << ans << endl;

    int num1 = 2, num2 = 2;
    int ans = num1 || num2;
    cout << ans << endl;
}