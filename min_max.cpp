#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int min = b ^ ((a ^ b) & -(a < b));
	int max = a ^ ((a ^ b) & -(a < b));
	cout<<"MIN :"<<min<<" MAX :"<<max<<endl;
}
