#include <iostream>
#include <string> 
#include <vector>
#include <algorithm> 
using namespace std;
int comp(string x, string y)
{
    return (x.append(y)).compare(y.append(x)) >  0 ? 1 : 0;
}
int main()
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    sort(arr, arr + n, comp);
	    for(int i = 0 ; i < n ; i++)
	        cout << arr[i];
	    cout << endl;
	}
	return 0;
}