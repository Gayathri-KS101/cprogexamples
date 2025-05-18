#include <stdio.h>
#include <string.h>

#define SIZE 10

// Define the structure (no typedef here)
struct Vehicle {
    char model[50];
    int year;
    float price;
};

// Function to get input
void getInput(struct Vehicle vehicles[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for Vehicle %d:\n", i + 1);
        printf("Model: ");
        scanf(" %[^\n]", vehicles[i].model); // Handles spaces
        printf("Year: ");
        scanf("%d", &vehicles[i].year);
        printf("Price: ");
        scanf("%f", &vehicles[i].price);
    }
}

// Sort in descending order by price
void sortVehicles(struct Vehicle vehicles[], int size) {
    struct Vehicle temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vehicles[i].price < vehicles[j].price) {
                temp = vehicles[i];
                vehicles[i] = vehicles[j];
                vehicles[j] = temp;
            }
        }
    }
}

// Display vehicle info
void displayVehicles(struct Vehicle vehicles[], int size) {
    printf("\nVehicles sorted by price (descending):\n");
    for (int i = 0; i < size; i++) {
        printf("Model: %s | Year: %d | Price: %.2f\n",
               vehicles[i].model, vehicles[i].year, vehicles[i].price);
    }
}

int main() {
    struct Vehicle vehicles[SIZE];

    getInput(vehicles, SIZE);
    sortVehicles(vehicles, SIZE);
    displayVehicles(vehicles, SIZE);

    return 0;
}

