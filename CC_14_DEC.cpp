#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 3)
            cout << "light" << endl;
        else if (x >= 7)
            cout << "heavy" << endl;
        else
            cout << "moderate" << endl;
    }
    return 0;
}
// ------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a != b && a != c && b != c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
// ------------------------------------------------------------------------------------------------
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int test = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= (i + 1))
            {
                sum = sum + ((i + 1) - arr[i]);
            }
            else
            {
                sum = -1;
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
// ------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int kk = -1;
        cin >> n >> k;
        int arr[n], brr[n], crr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            crr[i] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int minIndex = i, MinIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                    minIndex = j;
                if (brr[j] < brr[MinIndex])
                    MinIndex = j;
            }
            swap(arr[minIndex], arr[i]);
            swap(brr[MinIndex], brr[i]);
            swap(crr[MinIndex], crr[i]);
        }
        int count = 0, p = 0, z = 0, sum = 0;
        for (int i = 0; i < (n - 1); i++)
        {
            if (arr[i] = !arr[i + 1])
            {
                count++;
            }
        }

        if (count >= k)
        {
            while (z <= k)
            {
                if (p == 0 || (crr[p] != crr[p + 1]))
                {
                    sum = sum + brr[p];
                    z++;
                }
                p++;
            }
            cout << sum << endl;
        }

        else
        {
            cout << kk << endl;
        }
    }