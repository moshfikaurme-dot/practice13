#include<stdio.h>
void greeting (char nam[]){
    printf("Good morning  !!!!%s",nam);
}
int main (){
    char name[20]="Moshfika";
    greeting(name);
    return 0;
}