#include<stdio.h>

int main()
{
    int size,choice,i,element,position;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    {
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    do
    {
        printf("\n Select Your Choice From Below.");
        printf("\n 1. for insert Element.");
        printf("\n 2. for insert at position Element.");
        printf("\n 3. for delete Element.");
        printf("\n 4. for update Element.");
        printf("\n 5. for Print All Elements.");
        printf("\n 0. for Exit.");
        printf("\n Enter your Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Element: ");
                scanf("%d",&element);
                arr[size++] = element;
                printf("\n Element Inseted successfully. \n");
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d",&position);
                printf("Enter element: ");
                scanf("%d",&element);
                for(i=size-1;i>=position;i--)
                {
                    arr[i+1] = arr[i];
                }
                arr[position] = element;
                size++;
                printf("\n Element Inseted at position successfully. \n");
                break;
            case 3:
                printf("Enter position: ");
                scanf("%d",&position);
                for(i=position; i<size;i++)
                {
                    arr[i] = arr[i+1];
                }
                size--;
                printf("\n Element Deleted successfully. \n");
                break;
            case 4:
                printf("Enter position: ");
                scanf("%d",&position);
                printf("Enter element: ");
                scanf("%d",&element);
                arr[position] = element;
                printf("\n Element Updated successfully. \n");
                break;
            case 5:
                printf("\nArray Elements are: ");
                for(i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                break;
            case 0:
                break;
            default:
                printf("Wrong Choice.");
        }

    }while(choice != 0);

    return 0;
}