#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,p[100],count1=0,count2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	
	cin>>p[i];
}

	for(int j=0;j<n;j++)
	if(p[j]==0)
	{
		count1=0;
	}
	else
	{
		count2++;
	}
	
	if(count2!=0)
	{
		cout<<"HARD";
	}
	else if(count1==0)
	{
		cout<<"EASY";
	}
}
