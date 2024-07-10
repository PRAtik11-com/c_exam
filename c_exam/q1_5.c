#include<stdio.h>
#include<conio.h>
#include<string.h>

struct vechile {
    char model[50];
    int year;
    float price;
};

int main() {
    int n,i;

    printf("Enter the number of car: ");
    scanf("%d",&n);
    
    struct vechile  car[n];

    printf("\nEnter details for each car:\n");
    for (i=0;i<n;i++) 
	{
        printf("\nCar %d:\n",i+1);
        printf("Enter model: ");
        scanf(" %[^\n]",car[i].model); 
        
        printf("Enter year: ");
        scanf("%d",&car[i].year);
        printf("Enter price: ");
        
        scanf("%f",&car[i].price);
    }

   
    printf("\nDetails of all cars:\n");
    for (i=0;i<n;i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Model: %s\n", car[i].model);
        printf("Year: %d\n", car[i].year);
        printf("Price: %.2f\n", car[i].price);
    }

    return 0;
}

