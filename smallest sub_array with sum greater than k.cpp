#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>arr[i];
	    }
	    int min_len = n;
	    for(int start = 0; start < n; start++)
	    {
	        if(arr[start] > k)
	        {
	           min_len = 1;
	            break;
	        }
	        int sum = arr[start];
	        for(int end = start + 1; end < n; end++)
	        {
	            sum += arr[end];
	            if(sum > k && (end - start + 1) < min_len)
	            min_len = end - start + 1;
	        }
	    }
	    cout<<min_len<<endl;
	}
	return 0;
}
