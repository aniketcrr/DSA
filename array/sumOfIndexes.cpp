#include <iostream>
using namespace std;

void SumOfIndexes(int ar[])
{
    int f, s;

    cout << endl
         << "enter two indexes between 0 - 9 : ";
    cin >> f >> s;
    if (s == 0)
    {
        cout << "sum = " << ar[0];
    }
    else if (f == 0)
    {
        cout << "sum = " << ar[s];
    }
    else if (f < 0 || f > 9 || s > 9)
    {
        cout << "invalid range " << endl;
    }
    else
    {
        cout << "sum = " << ar[s] - ar[f - 1];
    }
}

int main()
{

    int arr[10], c = 1;
    bool t = true;

    cout << "enter 10 values : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "your entered 10 values : ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "after precomputation : ";

    for (int i = 1; i < 10; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
        cout << arr[i] << " ";
    }

    while (t)
    {
        cout << endl
             << "for exist press 0 " << endl;
        cout << "for continue press 1 " << endl;
        cin >> c;
        if (c == 1)
        {
            SumOfIndexes(arr);
        }
        else if (c == 0)
        {
            t = false;
        }
        else
        {
            cout << "enter valid input";
        }
    }

    return 0;
}