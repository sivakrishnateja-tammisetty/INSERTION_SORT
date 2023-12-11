INSERTION SORT: Takes an element and place it in a correct order.
#include<stdio.h>
void Insertion_sort(int *a,int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		j=i-1;
	       int temp=a[i];
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
void display(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	int arr[]={10,2,9,34,1,8};
	int SIZE=sizeof(arr)/sizeof(arr[0]);
	Insertion_sort(arr,SIZE);
	display(arr,SIZE);
	return 0;
}
