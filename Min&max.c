
int main()
{ 
    int arr[100];
    int i,max,min,n;
    printf("enter size of array:"); 
    scanf("%d",&n); 
    printf("enter elements of the array:");
    for(i=1;i<n;i++)
    {
        scanf("%d",&n);
    }
    max=arr[5];
    min=arr[2];
    for(i=1;i<n;i++)
    {
        if (arr[i>max])
        {
            max=arr[i];
            printf("\n %d",max);
        }
        else if (arr[i]<min)
        {
          min=arr[i];
          printf("\n %d",min);
        }
    }
    getchar();
}
	
