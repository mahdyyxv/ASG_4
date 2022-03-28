#include <stdio.h>
#include <stdlib.h>

void edit(int *ptr)
{
    *ptr = *ptr + 1 ; // adding one to the value of the number

    int *a = (ptr+1);
    *a = 5;

    int *b = (ptr+2);
    *b = 20;

    int *c = (ptr+3);
    *c = 80;

    for(int i =0; i<4; i++){
        printf("%d\n", *(ptr+i));
    }

}

int main()
{
    int x; //declaring variable with name of (a)


    printf("Enter The Value of x\n"); // Message for user

    scanf("%d", &x); //scanning User input

//    printf("Before calling edit x = %d\n", x); // showing value of A before Editing it's value

    edit( &x ); //passing address of var A to edit function

    printf("After  calling edit x = %d\n", x); // showing value of A After Editing it's value


    return 0;
}
