#include <stdio.h>
int station(int arr[], int n, int target);
int main()

{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    printf("1 Represent Sealdah\n");
    printf("2 Represent Bidhan Nagar Station\n");
    printf("3 Represent Dum Dum junction\n");
    printf("4 Represent Dum DUm Cantt");
    printf("5 Represent Duragnagar\n");
    printf("6 Represent Birati\n");
    printf("7 Represent Bisharapara Kodaliya\n");
    printf("8 Represent New Barrackpore\n");
    printf("9 Represent Madhyamgram\n");
    printf("10 Represent Hridaypur\n");
    printf("11 Represent barasat\n");
    int a=station(arr,11,9);
    if(a!=-1)
    {
   printf("Station is found");
    }
    else{
        printf("station is not found");
    }
    return 0;
}
 int  station(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low<=high)
    {
        mid = (low + high) / 2;
    
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
    }
    return -1;
}
