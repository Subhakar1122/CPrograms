#include <stdio.h>

int main() {
    int Size,Looper,Summer,Counter,Sum=0;
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
        Counter=Array[Looper];
        for(Summer=1;Summer<Array[Looper];Summer++)
        {
            Counter *= Summer;
        }
        Sum += Counter;
    }
    printf("%d",Sum);
}