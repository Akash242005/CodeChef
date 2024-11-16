#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int a;
	    cin >> a;
	    vector<int> arr(a);
	    for(int i=0;i<a;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    cout << arr[arr.size()-1] << endl;
	}
	return 0;
}
