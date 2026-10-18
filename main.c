//Program for student grade calculator.
#include <stdio.h>
int main()
{
    char fname[15],name[15];
    int s1,s2,s3,s4,s5,s6,total;
    float avg,percentage;
    printf("Enter the student's first name:");
    scanf("%s",fname);
    printf("Enter the student's name:");
    scanf("%s",name);
    printf("Enter the marks of student [S1,S2,S3,S4,S5,S6 out of 100]:");
    scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
    if(s1>=0&&s2>=0&&s3>=0&&s4>=0&&s5>=0&&s6>=0)
    {
        if(s1<=100&&s2<=100&&s3<=100&&s4<=100&&s5<=100&&s6<=100)
        {
            total=s1+s2+s3+s4+s5+s6;
            avg=total/6.0;
            percentage=(total*100.0)/600;
            printf("%s %s\n",fname,name);
            printf("Subject 1:%d\nSubject 2:%d\nSubject 3:%d\nSubject 4:%d\nSubject 5:%d\nSubject 6:%d\n",s1,s2,s3,s4,s5,s6);
            printf("Total Marks=%d\n",total);
            printf("Average=%.2f\n",avg);
            if(s1>=35&&s2>=35&&s3>=35&&s4>=35&&s5>=35&&s6>=35)
            {
                printf("Result=Pass\n");
                printf("Percentage=%.2f%%\n",percentage);
                if(percentage>=90)
                    printf("A-Grade");
                else if(percentage>=80)
                    printf("B-Grade");
                else if(percentage>=65)
                    printf("C-Grade");
                else if(percentage>=50)
                    printf("D-Grade");
                else if(percentage>=35)
                    printf("E-Grade");
            }
            else
                printf("Result=Fail");
        }
        else
            printf("Invalid Marks\nPlease enter marks correctly...");
    }
    else
        printf("Invalid Marks\nPlease enter marks correctly...");
    return 0;
}
