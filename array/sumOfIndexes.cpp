#include <iostream>
using namespace std;

int main()
{

    int arr[10], f, s, c = 1;
    bool t = true;

    cout << "enter 10 values : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "your entered 10 values : ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 1; i < 10; i++)
    {
        arr[i] = arr[i] + arr[i-1] ;
    }
    

    while (t)
    {
        cout <<endl << "for exist press 0 " << endl;
        cout << "for continue press 1 " << endl;
        cin >> c;
        if (c == 0)
        {
            t = false;
        }
        else if (c == 1)
        {
            cout<<"enter two indexes : ";
            cin>>f>>s ;
            if (s == 0)
            {
                cout << "sum = " << arr[0];
            }
            else
            {
                cout << "sum = " << arr[s] - arr[f];
            }
        }
        else
        {
            cout << "enter valid input";
        }
    }

    return 0;
}