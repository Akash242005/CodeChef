#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int count =0;
	for(int i=0;i<t;i++)
	{
	    string a;
	    cin >> a;
	    int b = a.length();
	    for(int j=0;j< b;j++)
	    {
	        if(a[j] == '4')
	        {
	            count++;
	        }
	    }
	    cout << count <<endl;
	    count =0;
	}
	return 0;
} 
