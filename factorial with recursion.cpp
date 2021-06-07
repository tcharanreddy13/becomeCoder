#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int arr[10000005];
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	if(arr[n]!=-1)
	{
		return arr[n];
	}
	return n*factorial(n-1);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}
	cout<<factorial(n);
	return 0;
}
