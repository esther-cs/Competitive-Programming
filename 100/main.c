// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,temp,flag;
    int counter=0;
    int maximum=0;
    scanf("%d %d",&i,&j);
    for (k=i;k<=j;++k){
        counter=0;
        temp=k;
        flag=1;
        while (flag==1){
            counter+=1;
            if (temp==1){
                flag=1;
                break;
            }else{
                if (temp%2==0){
                    temp=temp/2;
                }else{
                    temp=3*temp+1;
                }
            }
        }
        if (counter>maximum){
            maximum=counter;
        }
    }
    printf("%d %d %d",i,j,maximum);
    return 0;
}
