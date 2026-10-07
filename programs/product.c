#include <stdio.h>

struct Product { int id; char name[100]; double price; };
int main(void)
{
    struct Product product, *p = &product;
    printf("Enter product id: ");
    if (scanf("%d", &p->id) != 1) return 1;
    printf("Enter product name: ");
    if (scanf(" %99[^\n]", p->name) != 1) return 1;
    printf("Enter price: ");
    if (scanf("%lf", &p->price) != 1 || p->price < 0) return 1;
    printf("ID: %d\nName: %s\nPrice: %.2f\n", p->id, p->name, p->price);
    return 0;
}
