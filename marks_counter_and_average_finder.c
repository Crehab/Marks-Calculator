#include <stdio.h>
int main()
{
    int i = 0;
    int Marks = 0;
    int total = 0;
    int total_subjects = 0;
    printf("How many Subjects?:\n");
    scanf("%d", &total_subjects);

    while (i < total_subjects)
    {
        printf("Enter Marks %d:", i + 1);
        scanf("%d", &Marks);
        total = total + Marks;
        i++;
    }
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %d", total / 2);

    return 0;
}