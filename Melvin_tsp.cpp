
#include <iostream>

using namespace std;
class sort
{
public: int a[50],n,i;

	
void read()
{
    
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";

    for(i=0;i<n;i++)
	cin>>a[i];


}
void display(int m){
switch(m){
case 1: insertion(a,n);
	break;
case 2: mergeSort(a,0,n-1);
	break;
case 3: quick_sort(a,0,n-1);
	break;
}} 

void quick_sort(int b[],int l,int u)
{
    int j;
    if(l<u)
    {
	j=partition(b,l,u);
	quick_sort(b,l,j-1);
	quick_sort(b,j+1,u);
    }
 cout<<"\nQUICK SORT\n";
    cout<<"\nArray after sorting:"<<endl;

    for(i=0;i<n;i++)
	cout<<b[i]<<" ";

}

int partition(int b[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
	do
	    i++;

	while(b[i]<v&&i<=u);

	do
	    j--;
	while(v<b[j]);

	if(i<j)
	{
	    temp=b[i];
	    b[i]=b[j];
	    b[j]=temp;
	}
    }while(i<j);

    b[l]=b[j];
    b[j]=v;


return(j);
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
    int middle =start+(end-start)/2;

    mergeSort(arr, start, middle);
    mergeSort(arr, middle+1, end);

    merge(arr, start, middle, end);
    }
}
void merge(int arr[], int start, int middle, int end)
{
    int i, j, k;
    int n1 = middle - start + 1;
    int n2 =  end - middle;

    int L[30], R[30];

    for (i = 0; i < n1; i++)
    L[i] = arr[start + i];
    for (j = 0; j < n2; j++)
    R[j] = arr[middle + 1+ j];

    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
    if (L[i] <= R[j])
    {
	arr[k] = L[i];
	i++;
    }
    else
    {
	arr[k] = R[j];
	j++;
    }
    k++;
    }

    while (i < n1)
    {
    arr[k] = L[i];
    i++;
    k++;
    }

    while (j < n2)
    {
    arr[k] = R[j];
    j++;
    k++;
    }
cout<<"\nMERGE SORT\n";

    cout<<"\n Array after sorting : "<<endl;

    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
}

void insertion(int b[], int o)
{
int t,q,r;
cout<<"\nINSERTION SORT\n";
	for(t=1; t<o; t++)
	{
		r=b[t];
		q=t-1;
		while((r<b[q]) && (q>=0))
		{
			b[q+1]=b[q];
			q=q-1;
		}
		b[q+1]=r;
	}
	cout<<"Array after sorting : \n";
	for(t=0; t<o; t++)
	{
		cout<<b[t]<<" ";
	}
cout<<"\n Array after sorting by insertion sort : ";

    for(i=0;i<n;i++)
     cout<<a[i]<<" ";


}
};

int main()
{
int k,l;
sort obj;
do
{
cout<<"\n1.Input\n2.Sort\n3.Exit\n";
cin>>k;
switch(k){
case 1: obj.read();
	break;
case 2: cout<<"\n1.Insertion sort\n2.Merge Sort\n3.Quick Sort ";
	cin>>l;
	obj.display(l);
	break;
case 3:break;
default:break;
}
}while(k!=3);
 return 0;
}
