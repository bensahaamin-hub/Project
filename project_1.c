#include <stdio.h>

int main() {

    int g[7][7];   
    int r, c;      

    
    printf("Enter values for 7x7 grid (0 or 1):\n");

    for (r = 0; r < 7; r++) {
        for (c = 0; c < 7; c++) {
            scanf("%d", &g[r][c]);
        }
    }

    
    printf("\nYour drawing:\n");

    for (r = 0; r < 7; r++) {
        for (c = 0; c < 7; c++) {
            if (g[r][c] == 1)
                printf("* ");
            else
                printf(". ");
        }
        printf("\n");
    }

    
    int density = 0;  

    int diag = 0;       

    int center;        

    for (r = 0; r < 7; r++) {
        for (c = 0; c < 7; c++) {
            if (g[r][c] == 1)
                density++;
        }

        
        if (g[r][r] == 1)
            diag++;
    }

    center = g[3][3];  

    
    printf("\nNumber of 1s = %d\n", density);
    printf("Number of 1s on diagonal = %d\n", diag);
    printf("Center value = %d\n", center);

    return 0;
}