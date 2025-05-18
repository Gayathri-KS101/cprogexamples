#include <stdio.h>

// Define struct date properly
struct date {
    int dd;
    int mm;
    int yy;
};

// Define struct student properly, including date of birth as 'dob'
struct student {
    int no;
    char name[20];
    struct date dob;
};

int main() {
    struct student st;  // Declare a variable of type struct student

    // Prompt the user to enter student details
    printf("Enter student number, name, and date of birth (DD MM YYYY):\n");

    // Use correct scanf format specifiers:
    // %d for integers, %s for string (no & for arrays), and &
    // for the integers inside dob
    scanf("%d %19s %d %d %d", &st.no, st.name, &st.dob.dd, &st.dob.mm, &st.dob.yy);

    // Print the student details
    printf("\nStudent Details:\n");
    printf("Student No: %d\n", st.no);
    printf("Name: %s\n", st.name);
    printf("DOB: %02d-%02d-%04d\n", st.dob.dd, st.dob.mm, st.dob.yy);

    return 0;
}

