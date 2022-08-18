#include <stdio.h>

int main() {
    int Size,Looper,Summer,Counter=0,Checker=5;
    printf("Enter Size Of Array : ");
    scanf("%d",&Size);
    int Array[Size];
    for(Looper=0;Looper<Size;Looper++)
    {
        printf("\nEnter A Number A[%d] : ",Looper);
        scanf("%d",&Array[Looper]);
    }
    for(Looper=0;Looper<Size;Looper++)
    {
        for(Summer=0;Summer<Size;Summer++)
        {
            if(Array[Looper] == Array[Summer] && Summer != Looper)
            {
                Checker = 10;
                break;
            }
        }
    }
    if(Checker==10)
    {
        printf("DUPLICATE");
    }
    else if(Checker == 5)
    {
        printf("UNIQUE");
    }
}