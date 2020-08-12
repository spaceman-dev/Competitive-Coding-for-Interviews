#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string arr = "";
    for(int i = 0 ; i < n ; i++)
        arr = arr + "" +  'a';
    for(int i = n-1 ; i >= 0 ; i--)
    {
        k -= i;
        if(k >= 0)
        {
            if(k > 27)
            {
                arr[i] = 'z';
                k -= 26;
            }
            else
            {
                arr[i] = (char)(k + 97 - 1);
                k -= arr[i] - 'a' + 1;
            }
        }
        else
            break;
        k += i;

    }
    cout << arr << endl;  
}