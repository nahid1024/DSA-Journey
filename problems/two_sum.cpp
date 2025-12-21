#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 4};
    int target = 6;
    bool found = false;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == target && i != j)
            {
                found = true;
                cout << i << j << endl;
            }
        }
        if (found)
        {
            break;
        }
    }
}