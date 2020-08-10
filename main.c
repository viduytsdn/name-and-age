#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("Select your favorite Food Item (*_*)\n");
    printf("Pick an item : \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich\n");
    int choice=0;
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("Food Item - Pizza Price - Rs 239 (*_*).");
        break;
    case 2:
        printf("Food Item - Burger Price - Rs 129 (*_*).");
        break;
    case 3:
        printf("Food Item - Pasta Price - Rs 179 (*_*).");
        break;
    case 4:
        printf("Food Item - French Fries Price - Rs 99 (*_*).");
        break;
    case 5:
        printf("Food Item - Sandwich Price - Rs 149 (*_*).");
        break;
    default : printf("\tInvalid choice...... (^..^)......");
    }

}
