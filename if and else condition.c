#include <stdio.h>

void main (){
int a,b,c,d, choice;

printf("Enter a: ");

scanf("%d", &a);

printf("Enter b: ");

scanf("%d", &b);

printf("1.Additio \n2.Subtract\n3.Division\n Enter choice>> ");

scanf("%d", &choice);

if (choice==1){
printf("%d\n", a+b);

}
else if(choice==2){
printf("%d\n", a-b);
}
else{

printf("%d\n", a/b);

}
}
