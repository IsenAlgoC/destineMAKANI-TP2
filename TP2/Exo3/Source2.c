#include <stdio.h>
int main() 
{
    int ann�e;
    printf("entrer une ann�e au clabier ");
    scanf_s("%d", &ann�e);
    while (ann�e>10000){
        printf("entrer une ann�e au clabier ");
        scanf_s("%d", &ann�e);
    }
    if (ann�e % 4 == 0)
        printf("Ann�e bissextile");
    else if (ann�e % 100 == 0) {
        if (ann�e % 400 == 0) {
            printf("ann�e bisextile");
        }
        else {
            printf("ann�e non bissextile");
        }
    }
    else {
        printf("ann�e non bissextile");
    }
    return 0;
}