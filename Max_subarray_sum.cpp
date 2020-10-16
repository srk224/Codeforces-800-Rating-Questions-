#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,arr[10];
	int best=0,sum=0;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int a=0;a<n;a++)
	{
		for(int b=a;b<n;b++)\
		{
			sum+=arr[b];
			best=max(best,sum);
		}
	}
	
	cout<<"MAXIMUM SUM OF SUB-ARRAY IS: "<<best<<endl;
	
	return 0;
}
