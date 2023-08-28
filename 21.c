#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    int a;
    printf("Hello \n");
    goodmorning();
    goodafternoon();
    goodnight();
    printf("Stop here\n");
    return 0;
}
void goodmorning(){
printf("GoodMorning\n");
}
void goodafternoon(){
printf("GoodAfternoon\n");
}
void goodnight(){
printf("GoodNight\n");
}