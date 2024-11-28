#include <stdio.h>

struct student {
    int rollno;
    char sname[40];
    float marks;
};

int greater(struct student students[3]);

int greater(struct student students[3]) {
    for (int i = 0; i <3; i++) {
        if(students[i].marks > 500) {
            printf("Displaying student %d information: ", i+1);
            printf("%d %s %f", students[i].rollno, students[i].sname, students[i].marks);
        }
    }
}

int main()
{
    struct student students[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter student information \n");
        scanf("%d %s %f", &students[i].rollno, students[i].sname, &students[i].marks);
        
    }
    greater(students);

}