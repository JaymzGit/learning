#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
  printf("--------Suria Supermarket--------");
  char membership_type, result; double discount_percentage; float price; bool flag = true;
  while (flag == true) {
    printf("\nEnter membership type (S or G or P, X for non-member): ");
    scanf("%s", & membership_type);
    result = tolower(membership_type);

    if (result == 'p') {
      discount_percentage = 0.3;
      flag = false;
    } else if (result == 'g') {
      discount_percentage = 0.2;
      flag = false;
    } else if (result == 's') {
      discount_percentage = 0.1;
      flag = false;
    } else if (result == 'x') {
      discount_percentage = 0.0;
      flag = false;
    } else {
      printf("Invalid code, please enter again. \n");
      flag = true;
    }
  }

  printf("\nEnter item price (RM): ");
  scanf("%f", & price, "\n\n");

  printf("\nItem price       : RM %.2f", price);
  printf("\nMembership type  : %c", toupper(membership_type));
  printf("\nDiscount (%)     : %.0f", discount_percentage * 100);
  printf("\nDiscounted Price : RM %.2f", price - (discount_percentage * price));
}
