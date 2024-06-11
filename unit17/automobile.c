#include<stdio.h>

struct engine{
    char serial_no[10];
    int yom;
    char material[20];
    int quantity;
};

int isBetweenBB1AndCC6(const char* serial_no){
    return (strcmp(serial_no,"BB1") >= 0 && strcmp(serial_no,"CC6")<=0);
}

void partInfo(struct engine parts){
    printf("Serial Number : %s\n",parts.serial_no);
    printf("Year of Manufacture : %d\n",parts.yom);
    printf("Material : %s\n",parts.material);
    printf("Quantity Manufactured : %d\n",parts.quantity);
}

int main(){
  struct engine parts[] = { 
"AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};
int nop = sizeof(parts)/sizeof(parts[0]);

printf("Parts with serial numbers between BB1 and CC6:\n");
for(int i =0;i<nop;i++){
    if(isBetweenBB1AndCC6(parts[i].serial_no)){
        partInfo(parts[i]);
    }
}
return 0;
}