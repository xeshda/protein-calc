#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int weight;
char measurement;
char goals;
double total = 0.00, kg = 1.0;

int main(){

    printf("Measure in lb or kg? (l/k): ");
    scanf(" %c", &measurement);
    measurement = toupper(measurement);

    if(measurement == 'K'){
        printf("How much you weigh in kg: ");
        scanf("%d", &weight);
        kg = 0.454;
    }
    else{
        printf("How much do you weigh in lb: ");
        scanf("%d", &weight);
    }

    printf("Do you want to bulk or cut? (b/c): ");
    scanf(" %c", &goals);
    goals = toupper(goals);

    if(goals == 'B'){
        weight *= 2;
    }
    else{
        weight *= 1.5;
    }

    total = weight * kg; 

    printf("\nYou require %.2lf grams of daily protein intake.\n", total);

    return 0;
}