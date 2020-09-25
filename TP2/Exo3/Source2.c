#include <stdio.h>
int main() 
{
    int année;
    printf("entrer une année au clabier ");
    scanf_s("%d", &année);
    while (année>10000){
        printf("entrer une année au clabier ");
        scanf_s("%d", &année);
    }
    if (année % 4 == 0)
        printf("Année bissextile");
    else if (année % 100 == 0) {
        if (année % 400 == 0) {
            printf("année bisextile");
        }
        else {
            printf("année non bissextile");
        }
    }
    else {
        printf("année non bissextile");
    }
    return 0;
}