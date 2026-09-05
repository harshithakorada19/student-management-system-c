#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

int main() {

    struct Student student;

    printf("===== STUDENT MANAGEMENT SYSTEM =====\n");

    printf("Enter Student ID: ");
    scanf("%d", &student.id);

    printf("Enter Student Name: ");
    scanf("%s", student.name);

    printf("Enter Student Age: ");
    scanf("%d", &student.age);

    printf("Enter Student Marks: ");
    scanf("%f", &student.marks);

    printf("\n===== STUDENT DETAILS =====\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
