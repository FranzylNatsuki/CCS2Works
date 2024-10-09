#include <stdio.h>

int main() {
    
    float eng1, eng2, math1, math2, mus1, mus2;
    float average1, average2;
    int mathtot = 50, engtot = 50, musictot = 50;
    
    printf("Average Comparison! (input test scores below 50)\n");
    printf("Student 1");
    printf("\nMath 101:");
    scanf("%f", &math1);
    /// Capping the inputs to make sure noone gets a percent above 100% grade
    if (math1 > 50) {
        math1 = 50;
    }
    printf("\nEnglish 101:");
    scanf("%f", &eng1);
    
    if (eng1 > 50) {
        eng1 = 50;
    }
    printf("\nMusic 101:");
    scanf("%f", &mus1);
    
    if (mus1 > 50) {
        mus1 = 50;
    }
    printf("\nStudent 2");
    printf("\nMath 101:");
    scanf("%f", &math2);
    
    if (math2 > 50) {
        math2 = 50;
    }
    
    printf("\nEnglish 101:");
    scanf("%f", &eng2);
    
    if (eng2 > 50) {
        eng2 = 50;
    }
    
    printf("\nMusic 101:");
    scanf("%f", &mus2);
    
    if (mus2 > 50) {
        mus2 = 50;
    }
    
    average1 = (((math1/ mathtot) * 100) + ((eng1 / engtot) * 100) + ((mus1 / musictot) * 100)) / 3;
    average2 = (((math2/ mathtot) * 100) + ((eng2 / engtot) * 100) + ((mus2 / musictot) * 100)) / 3;
    
    printf("Student 1: %.2f%%\n", average1);
    printf("Student 2: %.2f%%\n", average2);
    
    if (average1 > average2) {
        printf("Student 1 has better grades!");
    }
    
    else if (average2 > average1) {
        printf("Student 2 has better grades!");
    }
    
    else if (average1 == average2) {
        printf("They both have the same grade!");
    }
    
    return 0;
}
