#include <stdio.h>
int main()
{
    int a[100];
    printf("Enter length of Array: ");
    int loa;
    scanf("%d", &loa);
    for(int i=0;i<=loa-1;i++)
    {
        printf("Number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int* p;
    int count=0;
    for(int i=loa-1;i>=0;i--)
    {
        count++;
        p=&a[i];
        printf("\nNumber %d: %d", count, *p);
    }
}
