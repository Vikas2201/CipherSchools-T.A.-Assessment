#include<iostream>
#include<vector>
using namespace std;
vector<int> wantedarray(int n)
{
	int t;
	vector<int> v; 
	if(n%2==0)
	{
		t=n/2;
		for(int i=1;i<=t;i++)
		{
			v.push_back(i);
		}
		t=-(n/2);
		for(int i=t;i<=-1;i++)
		{
			v.push_back(i);
		}
	}
	else
	{
		t=n/2;
		for(int i=0;i<t;i++)
		{
			v.push_back(i+1);
		}
		v.push_back(0);
		t=-(n/2);
		for(int i=t;i<=-1;i++)
		{
			v.push_back(i);
		}
	}
    return v;
}
int main()
{
	int n;
	vector<int> v;
	cout<<"Enter Value of N : ";
	cin>>n;
	v=wantedarray(n);
	cout<<"\nArray Containing "<<n<<" Unique intergers that sum upto 0 : ";
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<"\t";
	}
	return 0;
}
