#include <bits/stdc++.h>
using namespace std;
     
struct act
{
    int start;
    int end;
    int ind;
};
bool compare(act a1, act a2)
{
    return a1.end < a2.end;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
    	act arr[n];
    	for(int i = 0 ; i < n ; i++)
    	{
    	    cin >> arr[i].start;
    	    arr[i].ind = i;
    	}
    	for(int i = 0 ; i < n ; i++)
    	    cin >> arr[i].end;
    	sort(arr, arr + n, compare);
    	int i = 0;
        cout << arr[i].ind + 1 << " ";
        for (int j = 1; j < n; j++)
        {
            if (arr[j].start >= arr[i].end)
            {
                  cout << arr[j].ind + 1 << " ";
                  i = j;
            }
        }
        cout << endl;
    }
    return 0;
}