#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++){
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
