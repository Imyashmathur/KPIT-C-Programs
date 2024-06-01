#include<stdio.h>
#define MAX 10

void lAdd(int *l,int *q,int *r,int num);
void rAdd(int *l,int *q,int *r,int num);
void show(int *q,int lside,int rside);
int rFetch(int *l,int *q,int *r);
int lFetch(int *l,int *q,int *r);

int main(){
    int que[MAX];
    int left, right;
    left = right = -1;
    rAdd(&left,que,&right,10);
    rAdd(&left,que,&right,20);
    rAdd(&left,que,&right,30);
    show(que,left,right);

    lAdd(&left,que,&right,5);
    show(que,left,right);

    lFetch(&left,que,&right);
    show(que,left,right);

    rFetch(&left,que,&right);
    show(que,left,right);
    return 0;
}

void rAdd(int *lside, int *q, int *rside, int num) {
    if (*rside == MAX - 1) {
        printf("\nDequeue is full, no more insertion is possible.\n");
        return;
    }

    if (*rside == -1) {
        *rside = *lside = 0;
    } else {
        (*rside)++;
    }
    q[*rside] = num;
}

void lAdd(int *lside, int *q, int *rside, int num) {
    if (*rside == MAX - 1) {
        printf("\nDequeue is full, no more insertion is possible.\n");
        return;
    }

    if (*lside == -1) { 
        *lside = *rside = 0;
    } else if (*lside == 0) { 
        for (int i = *rside; i >= 0; i--) {
            q[i + 1] = q[i];
        }
        (*rside)++;
    } else {
        (*lside)--;
    }
    q[*lside] = num;
}

void show(int *q, int lside, int rside) {
    if (lside == -1) {
        printf("\nThe deque is empty.\n");
        return;
    }

    printf("\nList\n");
    for (int i = lside; i <= rside; i++) {
        printf("%d\t", q[i]);
    }
    printf("\n");
}


int lFetch(int *lside, int *q, int *rside) {
    if (*lside == -1) {
        printf("\nList is empty.\n");
        return -1; 
    }

    int item = q[*lside];
    if (*lside == *rside) {
        *lside = *rside = -1;
    } else {
        (*lside)++;
    }
    return item;
}


int rFetch(int *lside, int *q, int *rside) {
    if (*rside == -1) {
        printf("\nList is empty.\n");
        return -1;
    }

    int item = q[*rside];
    if (*lside == *rside) {
        *lside = *rside = -1; 
    } else {
        (*rside)--;
    }
    return item;
}