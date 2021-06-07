#include<iostream>
#include<climits>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
    for(int i=0;i<n;i++)
	{
		maxNo=max(maxNo,arr[i]);
	   minNo=min(minNo,arr[i]);
	}
	cout<<"Max No is :"<< maxNo<<" And "<<" "<<" Min No is :"<< minNo<<endl;
	return 0;
	
	return 0;  
}