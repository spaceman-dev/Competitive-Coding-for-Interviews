#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int dept[n];
        for(int i = 0 ; i < n ; i++) 
            cin >> arr[i];
        for(int i = 0 ; i < n ; i++) 
            cin >> dept[i];
        sort(arr, arr + n);
        sort(dept, dept + n);
        int ans = 0;
        int m = 0;
        int i = 0, j = 0;
        while(i < n && j < n)
        {
            if(arr[i] <= dept[j])
            {
                m += 1;
                i++;
            }
            else
            {
                m -= 1;
                j++;
            }
            ans = max(ans, m);
        }
        cout << ans << endl;
    }
    return 0;
}