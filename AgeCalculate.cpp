#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array List";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
     for(int i=0;i<n;i++)
    {
       cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}