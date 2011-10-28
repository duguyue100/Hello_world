#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(void)
{
	cout << "hello world" << endl;

	int n=0;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cout << "hello world " << i << endl;
	}

	cin >>  n;
	int i=1;
	for (i=1;i<=10;i++)
	{
		printf("hello world %d\n", i);
	}

	return 0;
}