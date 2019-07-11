#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>arr[i];
	    }
	    int sum = 0;
	    for(int j = 0; j < n-1; j++)
	    {
	        while(arr[j] >= arr[j+1])
	        arr[j+1]++;
	        sum += arr[j]; 
	    }
	    cout<<sum+arr[n-1]<<endl;
	}
	return 0;
}
