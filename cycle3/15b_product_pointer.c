#include <stdio.h>

struct Product
{
    int id;
    char name[30];
    float price;
};

int main()
{
    struct Product p;
    struct Product *ptr = &p;   /* pointer to structure */

    /* Access members using -> */
    printf("Enter product id: ");
    scanf("%d", &ptr->id);
    printf("Enter product name: ");
    scanf("%s", ptr->name);
    printf("Enter price: ");
    scanf("%f", &ptr->price);

    printf("\nProduct Details\n");
    printf("ID    : %d\n", ptr->id);
    printf("Name  : %s\n", ptr->name);
    printf("Price : %.2f\n", ptr->price);

    return 0;
}
