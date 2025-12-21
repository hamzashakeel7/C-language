#include <stdio.h>
#include <string.h>

struct Student{
    char name[12];
    float gpa;
};

int main(){
    struct Student student1 = {"Hamza", 4.0};
    struct Student student2 = {"sufgiyan", 2.0};

    // Adding these in an array
    struct Student students[] = {student1, student2};

    int n;
    n = sizeof(students) / sizeof(students[0]);

    for(int i=0; i<n; i++){
        printf("%s \t", students[i].name);
        printf("%0.2f \n", students[i].gpa);
    }

    return 0;
}