#include <stdio.h>

int main(){
int marks[5];
printf("Enter the number of 1st student:");
scanf("%d", &marks[0]);
printf("Enter the number of 2nd student:");
scanf("%d", &marks[1]);
printf("Enter the number of 3rd student:");
scanf("%d", &marks[2]);
printf("Enter the number of 4th student:");
scanf("%d", &marks[3]);
printf("Enter the number of 5th student:");
scanf("%d", &marks[4]);

printf("%d\n %d\n %d\n &d\n %d\n", marks[0], marks[1], marks[2], marks[3], marks[4]);
return 0;
}