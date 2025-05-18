#include <stdio.h>


// Function to compare two dates
int checkdate(int arr1[], int arr2[]) {
	// If years are equal, it checks months
	if (arr1[2] < arr2[2])         // year comparison
    		return 1;                  // arr1 earlier
	else if (arr1[2] > arr2[2])
    		return 0;                  // arr1 later

// Then comes here only if years are equal
	if (arr1[1] < arr2[1])         // month comparison
    		return 1;
	else if (arr1[1] > arr2[1])
    		return 0;

// Then only if months are also equal, it checks day
	if (arr1[0] < arr2[0])         // day comparison
    		return 1;
	else if (arr1[0] > arr2[0])
    		return 0;

// If all equal
return -1;
}

int main() {
    int date1[3], date2[3];
    
    printf("Enter date1 (DD MM YYYY): ");
    scanf("%d %d %d", &date1[0], &date1[1], &date1[2]);

    printf("Enter date2 (DD MM YYYY): ");
    scanf("%d %d %d", &date2[0], &date2[1], &date2[2]);

    int result = checkdate(date1, date2);

    if (result == 1) {
        printf("%02d/%02d/%04d is earlier than %02d/%02d/%04d\n",
               date1[0], date1[1], date1[2], date2[0], date2[1], date2[2]);
    } else if (result == 0) {
        printf("%02d/%02d/%04d is later than %02d/%02d/%04d\n",
               date1[0], date1[1], date1[2], date2[0], date2[1], date2[2]);
    } else {
        printf("Both dates are the same: %02d/%02d/%04d\n",
               date1[0], date1[1], date1[2]);
    }

    return 0;
}

