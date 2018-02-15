#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,k;
	cin>>a>>k;
	a = a & ~(1u << (k - 1));
	cout<<a<<endl;
	return 0;
}
