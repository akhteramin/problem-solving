#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark>=90 && mark<=100)
    {
        printf("The grade is A");
}
else if(mark>=80 && mark<=89)
{
    printf("The grade is B");
}
else if(mark>=70 && mark<=79)
{
    printf("The grade is C");
}
else if(mark>=60 && mark<=69)
{
    printf("The grade is D");
}
else if(mark>=0 && mark<=59)
{
    printf("The grade is F");
}
else
{
    printf("The result is none");
}
return 0;
}
