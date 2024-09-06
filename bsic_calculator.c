#include<stdio.h>
void command(void){
    printf(" 1 for addtion\n 2 for substraction\n 3 for multiplication\n 4 for division");
}
int main(){
    int a,b,opp;
    printf("enter the first number:");
    scanf("%d",&a);  
    printf("enter the second number:");
    scanf("%d",&b);
    printf("\n");
    command();
    printf("\n");
    printf("enter your choice:");
    scanf("%d",&opp);
    if(opp>0&&opp<=4){
        switch(opp){
            case 1: printf("a+b=%d\n",a+b);
            break;
            case 2: printf("a-b=%d\n",a-b);
            break;
            case 3: printf("a*b=%d\n",a*b);
            break;
            case 4: printf("a/b=%d\n",a/b);
            break;
        }
    }
    else{
        printf("you choice is not found....");
    }
    return 0;
}
