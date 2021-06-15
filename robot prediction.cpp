#include<iostream>
using namespace std;
int main()
{
	int n,p[n],k,price,num=0;
	cout<<"\nEnter the number of items:";
	cin>>n;
	cout<<"\nEnter the price of these items:";
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"\nEnter the money the customer have:";
	cin>>price;
	cout<<"\nEnter Robot's prediction of atleast k:";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(p[i]<=price)
		{
			num++;
		}
	}
	if(num==k)
	{
		cout<<"Right";
	}
	else
	{
		cout<<"Wrong";
	}
	return 0;
}
