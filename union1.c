#include <stdio.h>
#include <string.h>

// Define union id — this means only one of colour or size can exist at a time
union id {
    char colour[15];
    int size;
};

// Define struct cloth — it contains normal members and also a union
struct cloth {
    char manufacturer[25];
    float cost;
    union id identity;  // This is a union inside the struct
};

// Main function
int main() {
    // Declare two clothing items
    struct cloth shirt, frock;

    // Assign values to shirt
    strcpy(shirt.manufacturer, "Raymonds");
    shirt.cost = 999.50;
    strcpy(shirt.identity.colour, "Blue");  // Using the colour part of union

    // Assign values to frock
    strcpy(frock.manufacturer, "FabIndia");
    frock.cost = 1299.75;
    frock.identity.size = 40;  // Using the size part of union

    // Print values of shirt
    printf("👕 Shirt:\n");
    printf("Manufacturer: %s\n", shirt.manufacturer);
    printf("Cost: ₹%.2f\n", shirt.cost);
    printf("Colour: %s\n", shirt.identity.colour);  // Only colour is valid

    // Print values of frock
    printf("\n👗 Frock:\n");
    printf("Manufacturer: %s\n", frock.manufacturer);
    printf("Cost: ₹%.2f\n", frock.cost);
    printf("Size: %d\n", frock.identity.size);  // Only size is valid

    // Print memory sizes
    printf("\n📦 Memory Sizes:\n");
    printf("Size of union id: %lu bytes\n", sizeof(union id));
    printf("Size of struct cloth: %lu bytes\n", sizeof(struct cloth));

    return 0;
}

