#include<stdlib.h>
#include<stdio.h>
#define MAX_STUDENTS  450

 struct student{
        int r_no; char name[25];char department[25];char course[25];int yoj;
    };
    void displayNames(struct student students[],int num,int yoj);
    void displayStudent(struct student students[],int num,int r_no);

int main(){
   struct student students[MAX_STUDENTS] = {
   {1,"yash","C.E","DSA",2020},
   {2,"kumar","C.S.E","RSA",2021},
   {3,"mathur","E.C.E","JSA",2020},
   {4,"rishu","E.N.T.C","KSA",2023},                    
   {5,"sagar","M.E","DRA",2022},
   {6,"rohit","CI.E","DVA",2024},
   {7,"akash","M.B.A","DNA",2021}
   };
   int num = 7;
   int yoj;
   int r_no;
   printf("Enter the year of joining : ");
   scanf("%d",&yoj);
   printf("Students who joined in %d:\n",yoj);
   displayNames(students,num,yoj);
   printf("Enter the roll no. of student : ");
   scanf("%d",&r_no);
   printf("Data of student with roll number %d:\n",r_no);
   displayStudent(students,num,r_no);
   return 0;
}
void displayNames(struct student students[],int num,int yoj){
    for(int i = 0;i<num;i++){
        if(students[i].yoj == yoj){
            printf("%s\n",students[i].name);
        }
    }
}
void displayStudent(struct student students[],int num,int r_no){
    for(int i =0;i<num;i++){
        if(students[i].r_no == r_no){
            printf("Roll Number: %d\n", students[i].r_no);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yoj);
            return;
        }
    }
}