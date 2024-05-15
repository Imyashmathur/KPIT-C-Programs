#include<stdio.h>
int main(){
    int match_sticks = 21, user, computer;
    while(match_sticks>=1){
    printf("Pick matchsticks between 1 to 4: ");
    scanf("%d",&user);
    computer = 5 - user;
    printf("Computer choses %d \n",computer);
    match_sticks = match_sticks - user - computer;
    if(match_sticks == 1){
    printf("You lost");
    break;
    }
    }
    return 0;
}