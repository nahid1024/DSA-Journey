#include <iostream>
using namespace std;

int main()
{

    int sample[] = {1, 2, 3, 3, 4, 5, 5, 4, 6};
    int size = sizeof(sample) / 4;

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout << sample[i] << endl;
    // }

    // Finding the minimum value of the array
    // int smalllest = INT32_MAX;
    // for (int i = 0; i < 4; i++)
    // {
    //     smalllest = min(smalllest, sample[i]);
    // }
    // cout << smalllest << endl;

    // Finding the maximum index value of the array

    // int largest = INT32_MIN;
    // int largest_idx = 0;

    // for (int i = 0; i < 4; i++)
    // {
    //     if (sample[i] > largest)
    //     {
    //         largest = sample[i];
    //         largest_idx = i;
    //     }
    // }
    // cout << largest_idx << endl;

    // Linear Search

    // int target;
    // cin >> target;
    // int idx = -1;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (sample[i] == target)
    //     {
    //         idx = i;
    //         break;
    //     }
    // }
    // cout << idx << endl;

    // return 0;

    // Reversing an array
    // for (int i = 0; i < size / 2; i++)
    // {
    //     swap(sample[i], sample[size - (i + 1)]);
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << sample[i] << " ";
    // }

    // Finding unique values of an array

    int uniques = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (sample[i] == sample[j] && i != j)
            {
                uniques = 0;
                break;
            }
            else
            {

                uniques = sample[i];
            }
        }
        if (uniques != 0)
        {
            cout << uniques << " ";
        }
    }
}