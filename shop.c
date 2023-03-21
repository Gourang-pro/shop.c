#include <stdio.h>

int main() {
   int num_items;
   float price, total = 0;
   char name[50];

   printf("Enter the number of items: ");
   scanf("%d", &num_items);

   for (int i = 0; i < num_items; i++) {
      printf("Enter the name of item %d: ", i+1);
      scanf("%s", name);

      printf("Enter the price of item %d: ", i+1);
      scanf("%f", &price);

      printf("Added %s to cart for $%.2f\n", name, price);

      total += price;
   }

   printf("\nTotal cost of items: $%.2f\n", total);

   return 0;
}
