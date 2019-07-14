#include <bits/stdc++.h>
using namespace std;
int count = 0;
int mult(int a[], int n)
{
    if(n == 0)
    return 0;
    int r = 1;
    for(int i = 0; i < n; i++)
    {
        r = r*a[i];
    }
    return r;
}
void combination(int a[], int n, int r, int data[], int index, int i, int k)
{
    if(mult(data, index) > k)
    return;
    if(index == r)
    {
        if(mult(data, index) == k)
        ::count++;
        return;
    }
    if(i == n)
    return;
    data[index] = a[i];
    combination(a, n, r, data, index+1, i+1, k);
    combination(a, n, r, data, index, i+1, k);
}
int main() 
{
	int n, k;
	cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int data[3];
    combination(a, n, 3, data, 0, 0, k);
    cout<<::count;
	return 0;
}
