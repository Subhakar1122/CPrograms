#include<stdio.h>

int main(){
    int Size,Looper,Counter=3,Array[Size];
    scanf("%d",&Size);
    if(Size<100){
        Array[0]=0;Array[1]=1;Array[2]=1;
        for(Looper=0;Looper<Size;Looper++)
        {
            if(Array[Counter-1]+Array[Counter-2]==Looper)
            {
                Array[Counter] = Looper;
                Counter += 1;
            }
        }
        for(Looper=0;Looper<Counter;Looper++)
        {
            printf("%d ",Array[Looper]);
        }
    }
}