#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if((n & (n - 1)) == 0)
		cout<<"true\n";
	else
		cout<<"false\n";
	return 0;
}
