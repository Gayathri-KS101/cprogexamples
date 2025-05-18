#include <stdio.h>
#include <string.h>  // for strcpy

// Define the struct type named 'account'
struct account {
    int accno;
    char type;
    char name[40];
};

int main() {
    // 1 Creating instances of the struct
    struct account customer1, customer2;

    // 2 Assigning values to customer1
    customer1.accno = 1001;
    customer1.type = 'S';  // S for Savings
    strcpy(customer1.name, "Gayathri KS");

    // 3 Assigning values to customer2
    customer2.accno = 1002;
    customer2.type = 'C';  // C for Current
    strcpy(customer2.name, "Akshara PD");

    // 4 Printing the info
    printf("Customer 1: Acc No: %d, Type: %c, Name: %s\n", customer1.accno, customer1.type, customer1.name);
    printf("Customer 2: Acc No: %d, Type: %c, Name: %s\n", customer2.accno, customer2.type, customer2.name);

	// 5 using array instance
	struct account customers[3];

    // Assigning values to array elements
    customers[0].accno = 2001;
    customers[0].type = 'S';
    strcpy(customers[0].name, "Anusree Ramakrishnan");

    customers[1].accno = 2002;
    customers[1].type = 'C';
    strcpy(customers[1].name, "Divya Betcy");

    customers[2].accno = 2003;
    customers[2].type = 'S';
    strcpy(customers[2].name, "John Doe");

    // Loop through array and print
    printf("\nArray of customers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Customer %d: Acc No: %d, Type: %c, Name: %s\n", i + 1, customers[i].accno, customers[i].type, customers[i].name);
    }

    return 0;
}
