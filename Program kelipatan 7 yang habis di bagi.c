#include<stdio.h>
#include<conio.h>
int main()
{
    int i=7;
    printf("KELIPATAN 7 YANG HABIS DIBAGI 2 (1-50)\n");
    while(i<50)
    {
        if(i%2==0 & i%7==0)
        {
            printf("\n%d",i);
        }i++;

    }
    getch();
}
