#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int weight, total, amount;
char measurement, goals;
double kg = 1.0;

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

    printf("\nYou require %d grams of daily protein intake.\n", total);

    printf("Recommended ingredients: \n");

    amount = total / 41;
    printf("%d Cod Fillet (41g)\n", amount);
    total %= 41;

    amount = total / 31;
    printf("%d Salmon Fillet (31g)\n", amount);
    total %= 31;

    amount = total / 27;
    printf("%d Chicken Breast (27g)\n", amount);
    total %= 27;

    amount = total / 8;
    printf("%d Dairy Milk (8g)\n", amount);
    total %= 8;

    amount = total / 7;
    printf("%d Peanuts/Peanut Butter (7g)\n", amount);
    total %= 7;

    amount = total / 6;
    printf("%d Eggs (6g)\n", amount);
    total %= 6;

    amount = total / 6;
    printf("%d Almonds (6g)\n", amount);

    return 0;
}