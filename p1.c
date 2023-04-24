#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string p;
	int k;
	cout<<"Enter the text to cipher"<<endl;
	cin>>p;
	cout<<"Enter the cipher key"<<endl;
	cin>>k;
	int i,n;
	char x;
	n=p.length();
	int c;
	cout<<"The cipher text is:";
	for(int i=0;i<n;i++)
	{
		if(p[i]>=65 && p[i]<=90)
		{
			c=(p[i]-65+k)%26;
			x=c+'A';
			cout<<x;
		}
		if(p[i]>=97 && p[i]<=122)
		{
			c=(p[i]-97+k)%26;
			x=c+'a';
			cout<<x;
		}
		if(p[i]>='0' && p[i]<='9')
		{
			c=(p[i]-48+k)%10;
			x=c+'0';
			cout<<x;
		}
	}
	cout<<endl;
	return 0;
}
