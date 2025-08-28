#include <stdio.h>
int main() {
    int a, b, c, t;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < 35 || b < 35 || c < 35) {
        printf("Fail (less than 35 in a subject)\n");
        return 0;
    }

    t = a + b + c;
    avg = t / 3.0;

    printf("Total marks = %d\n", t);
    printf("Average marks = %.2f\n", avg);

    if(avg >= 70)
        printf("Grade: Distinction\n");
    else if(avg >= 60)
        printf("Grade: First\n");
    else if(avg >= 50)
        printf("Grade: Second\n");
    else if(avg >= 35)
        printf("Grade: Third\n");
    else
        printf("Fail\n");

    return 0;
}
