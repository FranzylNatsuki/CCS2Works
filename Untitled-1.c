#include <stdio.h>

int main() {
    int options, money, deposit;
    do {
        printf("MENU\n");
        printf("1: Deposit\n");
        printf("2: Withdraw\n");
        printf("3: Balance Inq\n");
        printf("4: Fast Cash\n");
        printf("5: Exit\n");
        scanf("%d", &options)

        if (options == 1)
        {
            printf("1: Amt to Deposit:\n");
            scanf("%d", &deposit);
            
            money = money + deposit;
            printf("Current Balance: %d", money)
        }

        if (options == 2) {
            
        }
        if (options == 3) {}
        if (options == 4) {}
        if (options == 5) {
            break;
        }
        
        
    } while (options != 5)
}