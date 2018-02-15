#include <bits/stdc++.h>
using namespace std;
bool isOpposit(int x,int y)
{
	return ((x ^ y) < 0);
}
int main()
{
	int x,y;
	cin>>x>>y;
	if(isOpposit(x,y))
		cout<<"true\n";
	else
		cout<<"false\n";
	return 0;
}
