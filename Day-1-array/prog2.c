#include<stdio.h>

int main()
{
    int arr[5],index=-1,element;

    for(int i=0; i < 5; i++)
    {
        printf("Enter element arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for(int i=0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSearch.\n");
    printf("Enter Element For Search: ");
    scanf("%d",&element);
    for(int i=0;i<5;i++)
    {
        if(element == arr[i])
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        printf("Value Not Found.");
    }
    else
    {
        printf("Value found at %d",index);
    }

    return 0;
}