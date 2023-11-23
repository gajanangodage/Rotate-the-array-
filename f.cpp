#include<iostream>
using namespace std;
void rotate(int arr[],int d,int n)
{
	int temp[n];
	int k = 0;
	for(int i=d;i<n;i++)
	{
		temp[k] = arr[i];
		k++;
	}
	for(int i=0;i<d;i++)
	{
		temp[k] = arr[i];
		k++;
	}
	for(int i=0;i<n;i++)
	{
		arr[i] = temp[i];
	}
	cout<<"THE ARR IS HERE"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the number"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cout<<"Enter the rorate number "<<endl;
	cin>>k;
	rotate(arr,k,n);
}
