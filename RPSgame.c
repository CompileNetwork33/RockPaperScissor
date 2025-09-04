#include<stdio.h>//include standard input/output
#include<stdlib.h>//standard library functions for random number genration
#include<time.h>//time function used to seed random number genration
int comChoice,myChoice;
void game(){
    srand(time(NULL));//seed random num.genrator using current time
    comChoice = rand()%3+1;//genrate randam num.between 1 to 3
    printf("Welcome to the rock,paper ,scissor game:\n");
    printf("Choose your choice(1.for rock,2.for scissor,3.for paper\n)");
    printf("enter your choice:\n");
    scanf("%d",&myChoice);
    while(1){
        if (myChoice==comChoice){
            printf("match draw!!\n");
            printf("enter your choice:\n");
            scanf("%d",&myChoice);
}else if((myChoice==1 && comChoice==3)||(myChoice==2 && comChoice==3)||(myChoice==3 && comChoice==1)){
    printf("you won,yayyyy\n");
    break;
}else{
    printf("you lose\n");
    printf("enter your choice:\n");
    scanf("%d",&myChoice);
}
    }
}int main(){
    game();
    return 0;
}