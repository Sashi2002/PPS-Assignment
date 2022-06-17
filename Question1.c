#include <stdio.h>
int main(){
    int l,r,k;
    int i,count=0;
    printf("Enter the value of l r k : ");
    scanf("%d %d %d",&l,&r,&k);

    for(i=l;i<=r;i++){

        if(i%k==0){
            count ++;
        }
        else
            count = count;
    }

    printf("The count between %d and %d divisible by %d is %d",l,r,k,count);

    return 0;
}