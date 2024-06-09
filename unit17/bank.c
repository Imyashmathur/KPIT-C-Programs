#include<stdio.h>
#define MAX 200

struct bank{
    int acc_no;
    char name[25];
    float balance;
};
void statement(struct bank customers[],int num,float threshold);
void withdrawal_deposit(struct bank customers[],int num,int acc_no,float amount,int code);

int main(){
     struct bank customers[MAX] = {
        {101, "Priya", 500.0},
        {102, "Yash", 1500.0},
        {103, "Shivam", 900.0},
        {104, "Ritik", 1200.0},
        {105, "Chetan", 300.0}
    };
    int num = 5;
    printf("Customers with balance below Rs. 1000: \n");
    statement(customers,num,1000.0);
    printf("Deposit\n");
    withdrawal_deposit(customers,num,102,500.0,1);
    printf("Withdrawal\n");
    withdrawal_deposit(customers,num,101,200.0,0);
    printf("Withdrawal with insufficient balance");
    withdrawal_deposit(customers,num,105,400.0,0);
    return 0;
}
void statement(struct bank customers[],int num,float threshold){
    for(int i =0;i<num;i++){
        if(customers[i].balance<threshold){
            printf("Account number: %d, Name: %s\n", customers[i].acc_no,customers[i].name);
        }
    }
};

void withdrawal_deposit(struct bank customers[],int num,int acc_no,float amount,int code){
    for(int i = 0;i<num;i++){
        if(customers[i].acc_no = acc_no){
            if(code == 1){
                customers[i].balance += amount;
                printf("Deposited Rs. %.2f to account %d. New balance: Rs. %.2f\n", amount, acc_no, customers[i].balance);
            }else if(code == 0){
                if(customers[i].balance - amount < 1000.0){
                     printf("The balance is insufficient for the specified withdrawal.\n");
                }else{
                    customers[i].balance -= amount;
                    printf("Withdrew Rs. %.2f from account %d. New balance: Rs. %.2f\n", amount, acc_no, customers[i].balance);
                }
            }
            return;
        }
    }
    printf("Account number %d not found.\n", acc_no);
}