//a program to determine prime if a number is prime
#include<stdio.h>
int main(){
    int number;
    printf("please enter a number:");
    scanf("%d", &number);

    /*
    number =55-> 1,5
    12 -> 2,3,4,6

    15 -> 3, 5
    2, 3, 4, 5...., 14
    */
   int isdivisible =0;
   //isdivisible = 0 -> not isdisivible
      //isdivisible = 1 -> not isdisivible


   for(int i=2 ; i<number ; i++){
    if(number %i == 0){
        //15 % 2==0-> false
        //15 % 3 == 0 -> true
        printf("%d is not a prime number.\n",number);
        break;
    }
   }
   if(isdivisible == 1){
    printf("%d is not a prime number.\n",number);
   }
   else{
    printf("%d is not a prime number.\n",number);
   }
}