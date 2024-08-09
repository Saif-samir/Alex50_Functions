#include <stdio.h>
#include <stdlib.h>
void getGrade(int );
int main()
{
    int number=0;
    char  name[50];
    int degree;
    int total=0;
    float average=0;
    printf("Enter the number of subjects:");
    scanf("%d",&number);
    for(int i=0;i<number;i++)
    {
    printf("\nEnter the name of the subject:");
    scanf("%s",&name);
    printf("Enter its degree:");
    scanf("%d",&degree);
    printf("The Grade of %s is ",name);
    getGrade(degree);
    total += degree;
    }
    printf("\nThe Total=%d",total);
    printf("\nThe Average=%.3f",(total/(float)number));
    return 0;
}
int grade;
void getGrade(int degree)
{
    if(degree<0||degree>100)
    {
        printf("Error\n");
    }
    else if(degree>=85&&degree<=100)
    {
        printf("Excellent");
    }
    else if(degree<85&&degree>=75)
    {
        printf("VeryGood");
    }
    else if(degree<75&&degree>=65)
    {
        printf("Good");
    }
    else if(degree<65&&degree>=55)
    {
        printf("Passed");
    }
    else
    printf("Failed");
    return grade;
}
