#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l = s.length();
	    int i = l - 1;
	    while(isdigit(s[i]))
	    {
	        i--;
	    }
	    i++;
	    if(stoi(s.substr(i, l - i)) == i)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
