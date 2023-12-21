#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};

    int a = 2;
    int b = 5;
    int c = 6;

    int ans = INT_MIN;

    int PMAX[10], SMAX[10];

    PMAX[0] = arr[0];

    SMAX[9] = arr[9];

    for (int i = 8; i >= 0; i--)
    {
        SMAX[i] = max(SMAX[i + 1], arr[i]);
    }

    for (int i = 1; i < 10; i++)
    {
        PMAX[i] = max(PMAX[i - 1], arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << SMAX[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << PMAX[i] << " ";
    }
    cout << endl;

    for (int i = 1; i <= 9; i++)
    {

        ans = max(ans, (a * SMAX[i + 1] + b * arr[i] + c * PMAX[i - 1]));
        // cout << SMAX[i + 1] << " ";
        // cout << arr[i] << " ";
        // cout << PMAX[i - 1] << " ";
        // cout << ans <<" " <<endl;
    }

    cout << "ans = " << ans << " ";

    return 0;
}
