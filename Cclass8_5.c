#include<stdio.h>
void printmarkes(int numbers[]){
    for(int index=0; index < 5; index++);
    {
        printf(" mark of student%d :%d\n", index + 1, numbers[index]);
    }
    printf("\n");
}
void calculation(int numbers[]){
    int sum=0;
    for(int index =0; index < 5; index++)
    {
        sum=sum+numbers[index];
    }
    printf("total numbers:%d\n",sum);
    printf("average numbers:%.2f",sum/5.0);
}
int main(){
    /*
    int num [10];
    printf("enter num student 1:");
    scanf("%d",&num[0]);
    printf("enter num student 7:");
    scanf("%d",&num[6]);
    printf("enter num student 99:");
    scanf("%d",&num[100]);
    */
   int numbers[5];
   for(int index=0; index < 5; index++);
   {
    printf("enter numbers of student %d:",index+1);
    scnaf("%d",&numbers[index]);
   }

   printmark(number);
   printmark(number);
   printmark(number);
   calculation(number);



}

