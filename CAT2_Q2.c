#include <stdio.h>

int main() {
    // Declare and initialize the 2D array 'scores'
    int scores[2][2] = {
        {65, 92},
        {35, 70}
    };

    // Print the elements of the array
    printf("Elements of the 2D array 'scores':\n");
    for (int i = 0; i < 2; i++) {          
        for (int j = 0; j < 2; j++) {      
            printf("%d ", scores[i][j]);   
        }
        printf("\n");                      
    }

    return 0;
}
