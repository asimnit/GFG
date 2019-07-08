#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int i = 0; i < T; i++)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i = 0; i < n; i++)
	    {
	        cin>>v[i];
	    }
	    sort(v.begin(), v.end());
	    int c = 0;
	    string s1, s2;
	    if(n % 2 != 0)
	    {
	        s1 += to_string(v[0]);
	        c++;
	    }
	    for(int i = c; i < n - 1; i = i + 2)
	    {
	        s1 += to_string(v[i]);
	        s2 += to_string(v[i+1]);
	    }
	    cout<<(stoi(s1) + stoi(s2))<<endl;
	    //cout<<s1<<" "<<s2<<endl;
	  }
	return 0;
}
