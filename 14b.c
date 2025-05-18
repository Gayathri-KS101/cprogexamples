#include <stdio.h>
#include <string.h>
//usage of object like / constant macro here
#define SIZE 3

// Define the structure for Hotel
struct Hotel {
    char name[100];
    char address[200];
    char grade;
    float avg_room_charge;
    int num_rooms;
};

// Function to get input for all hotels
//We use an array of 'struct Hotel' to store details for multiple hotels.
// Each element in the array represents a hotel record.
void getHotelData(struct Hotel hotels[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for Hotel %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", hotels[i].name);
        printf("Address: ");
        scanf(" %[^\n]", hotels[i].address);
        printf("Grade (e.g. A/B/C): ");
        scanf(" %c", &hotels[i].grade);
        printf("Average Room Charge: ");
        scanf("%f", &hotels[i].avg_room_charge);
        printf("Number of Rooms: ");
        scanf("%d", &hotels[i].num_rooms);
    }
}

// Function to filter and sort hotels by grade and room charge
void printHotelsByGrade(struct Hotel hotels[], int size, char target_grade) {
    // First, filter hotels with the given grade
    // we save all the hotels coming under the target_grade to an array called filtered which acts as an instance for the struct hotel
    struct Hotel filtered[SIZE];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (hotels[i].grade == target_grade) {
            filtered[count++] = hotels[i];
        }
    }

    // Sort the filtered hotels based on average room charge (ascending)
    for (int i = 0; i < count - 1; i++) { //outerloop
        for (int j = i + 1; j < count; j++) {	//innerloop
            if (filtered[i].avg_room_charge > filtered[j].avg_room_charge) {
                struct Hotel temp = filtered[i];	//swapping takes place
                filtered[i] = filtered[j];
                filtered[j] = temp;
            }
        }
    }

    // Print the result
    if (count == 0) {
        printf("\nNo hotels found with grade %c.\n", target_grade);
    } else {
        printf("\nHotels of grade %c sorted by average room charge:\n", target_grade);
        for (int i = 0; i < count; i++) {
            printf("Name: %s | Address: %s | Room Charge: %.2f | Rooms: %d\n",
                   filtered[i].name, filtered[i].address,
                   filtered[i].avg_room_charge, filtered[i].num_rooms);
        }
    }
}

// Function to print hotels with average room charge less than a given value
void printHotelsBelowCharge(struct Hotel hotels[], int size, float maxCharge) {
    int found = 0;

    printf("\nHotels with average room charge less than %.2f:\n", maxCharge);

    for (int i = 0; i < size; i++) {
        if (hotels[i].avg_room_charge < maxCharge) {
            printf("Name: %s | Address: %s | Grade: %c | Room Charge: %.2f | Rooms: %d\n",
                   hotels[i].name, hotels[i].address, hotels[i].grade,
                   hotels[i].avg_room_charge, hotels[i].num_rooms);
            found = 1;
        }
    }

    // Changed this line as per your request
    if (found == 0) {
        printf("No hotels found with average room charge below %.2f.\n", maxCharge);
    }
}


int main() {
    struct Hotel hotels[SIZE];
    char grade;

    getHotelData(hotels, SIZE);

    printf("\nEnter the grade of hotels you want to filter (A/B/C...): ");
    scanf(" %c", &grade);

    printHotelsByGrade(hotels, SIZE, grade);
    printf("\nEnter maximum average room charge to filter: ");
    scanf("%f", &chargeLimit);
    printHotelsBelowCharge(hotels, SIZE, chargeLimit);


    return 0;
}

