#include<stdio.h>
#include<stdlib.h>

struct cricket{
    char name[25];
    int age;
    int test;
    float average;
};

int compare(const void *a, const void *b) {
    struct cricket *playerA = (struct cricket *)a;
    struct cricket *playerB = (struct cricket *)b;
    if (playerA->average < playerB->average) return -1;
    if (playerA->average > playerB->average) return 1;
    return 0;
}


int main(){
    struct cricket player[20] = {
"Yash", 24, 40, 99.58,
"Ritik", 24, 34, 60,
"Shivam", 22, 32, 57,
"Chetan", 23, 12, 7,
"Gopal", 25, 65, 34,
"Nikhil", 21, 18, 14
};
    int num = 6;
    qsort(player,6,sizeof(struct cricket),compare);
    printf("Players according to their average runs : \n");
     for (int i = 0; i < 6; i++) {
        printf("Name: %s, Age: %d, Test Matches: %d, Average Runs: %.2f\n",
               player[i].name, player[i].age,
               player[i].test, player[i].average);
    }

    return 0;
}