#include<iostream>
using namespace std;
int binary(int arr[],int l,int r,int x)
{
	if(l<=r)
	{
	int mid=(l+r)/2;//mid=l+((r-l)/2) 000 (-4,+3) 011 + 011 
	if(arr[mid]==x)
		return mid;
	if (arr[mid]>x){
		return binary(arr,l,mid-1,x);
	}
	
	return binary(arr,mid+1,r,x);
}
return -1;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=binary(arr,0,n,1);
	(res==-1)?cout<<"not present":cout<<"present at index="<<res;
	return 0;
}