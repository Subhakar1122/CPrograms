#include<stdio.h>

int main()
{
    int Size,Looper;
    int Array[Size];
    scanf("%d",&Size);
    for(Looper=0;Looper<Size-1;Looper++)
    {
        scanf("%d",&Array[Looper]);
    }
    for(Looper=0;Looper<Size;Looper++)
    {
        if(Array[Looper] != Looper+1)
        {
            printf("%d",Looper+1);
            break;
        }
    }
    return Looper+1;
}