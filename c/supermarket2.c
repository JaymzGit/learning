//Using switch-case method
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
    printf("--------Suria Supermarket--------");
    char membership_type, result; double discount_percentage; float price;
    bool flag = true;
    while (flag == true){
        printf("\nEnter membership type (S or G or P, X for non-member): ");
        scanf("%s", &membership_type);
        result = tolower(membership_type);
        
        switch (result) {
          case 'p':
            discount_percentage = 0.3;
            flag = false;
            break;
          case 'g':
            discount_percentage = 0.2;
            flag = false;
            break;
          case 's':
            discount_percentage = 0.1;
            flag = false;
            break;
          case 'x':
            discount_percentage = 0.0;
            flag = false;
            break;
          default:
            printf("Invalid code, please enter again. \n");
            flag = true;
            break;
        }
    }
        
        printf("\nEnter item price (RM): ");
        scanf("%f", &price, "\n");
        
        printf("\nItem price       : RM %.2f", price);
        printf("\nMembership type  : %c", toupper(membership_type));
        printf("\nDiscount (%)     : %.0f", discount_percentage * 100);
        printf("\nDiscounted Price : RM %.2f", price - (discount_percentage * price));
}
