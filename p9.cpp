#include<bits/stdc++.h>
#define lli long long int 
#define ll long long 
#define f(i, n) for(int i=0; i<n; i++)

using namespace std;



void test()
{
	lli  n, h, c=0, u;
	cin>>n;
	string s;
	for(int i=1; i<= n; i++)
	{
		if(i == n && i%2 == 1)
		{
			s += "I hate it";	
		}
		else if(i == n && i%2 == 0)
		{
			s += "I love it";
		}
		else if(i%2 == 0)
		{
			s += "I love that ";
		}
		else{
			s += "I hate that ";
		}
		
	}
	cout<<s;
}

int main(){
	
	test();
	
	return 0;

}