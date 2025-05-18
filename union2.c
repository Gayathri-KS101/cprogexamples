#include <stdio.h>
#include <string.h>

// Define a struct
struct Book {
    int id;
    char title[30];
    float price;
};

// Define a union
union Pen {
    int id;
    char brand[30];
    float cost;
};

int main() {
    // 1)Initialization

    // Struct: all members initialized
    struct Book b1 = {101, "C Programming", 299.99};

    // Union: only first member directly initialized
    union Pen p1 = {201};  // Only id gets initialized, others will be garbage

    // 2 Accessing members
    printf("STRUCT BOOK DETAILS:\n");
    printf("ID: %d\n", b1.id);
    printf("Title: %s\n", b1.title);
    printf("Price: ₹%.2f\n", b1.price);

    printf("\n UNION PEN DETAILS (after initializing only ID):\n");
    printf("ID: %d\n", p1.id);

    // Let's now assign brand
    strcpy(p1.brand, "Parker");

    // 3 Value Altering — union allows only one valid value at a time
    printf("\n UNION PEN DETAILS (after assigning brand):\n");
    printf("Brand: %s\n", p1.brand);
    printf("ID (after brand assign): %d   (Garbage now)\n", p1.id);  // corrupt

    // Let's now assign cost
    p1.cost = 59.50;

    printf("\n UNION PEN DETAILS (after assigning cost):\n");
    printf("Cost: ₹%.2f\n", p1.cost);
    printf("Brand (after cost assign): %s  ❌ (Corrupt now)\n", p1.brand);

    return 0;
}

