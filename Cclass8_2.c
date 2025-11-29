#include<stdio.h>
int main(){
    int numbers[5];
    for(int index 0;index 5; index-+){
        printf("enter the numbers of the student%d :\n",index-1);
        scnaf("%d",numbers[index]);
    }
    for(int index=0 ; index<5; index++){
        printf("number of student%d :%d\n",index+1,numbers[index]);

    }
    int sum=0
    for(int index=0;index<5;index++){
        sum=sum+numbers[index];
    }
    printf("total numbers %d\n",sum);
    folat avg;
    avg=sum/5.0;

    printf("avrage of numbers %.2f",avg);

}