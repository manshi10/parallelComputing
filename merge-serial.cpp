//merge sort - serial implemenation
#include<iostream>
//#include<bits/stdc++>
using namespace std;
void merge(int a[], int l, int m, int r)
{
	int temp[m-l+1], temp2[r-m];
	for(int i=0; i<(m-l+1); i++)
		temp[i]=a[l+i];
	for(int i=0; i<(r-m); i++)
		temp2[i]=a[m+1+i];
	int i=0, j=0, k=l;
	while(i<(m-l+1) && j<(r-m))
	{
		if(temp[i]<temp2[j])
			a[k++]=temp[i++];
		else
			a[k++]=temp2[j++];
	}
	
	while(i<(m-l+1))
		a[k++]=temp[i++];
	while(j<(r-m))
		a[k++]=temp2[j++];

}
void mergeSort(int a[], int l, int r)
{
	if(l<r)
	{
		//cout<<"came here";
		int m=(l+r)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}
void print(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<"\nUnsorted array; ";
	print(a,n);
	mergeSort(a,0,n-1);
	cout<<"\nSorted array: ";
	print(a,n);
	return 0;
}
