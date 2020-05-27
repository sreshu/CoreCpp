#include <stdio.h> 
#include <stdlib.h> 

struct MyStruct {
    int i; 
    double d; 
    char a[5];
};


  
int main() 
{ 
    int *p = (int*)malloc(sizeof(int));
    printf("address=%p, value=%d\n", p, *p);
    
     // reserve memory for several integers
    
    int *p2 = (int*)malloc(3*sizeof(int));
    printf("address=%p, value=%d\n", p2, *p2);
    
    // memory for arrays and structs
    
    int *p3 = (int*)malloc(3*sizeof(int));
    p3[0] = 1; p3[1] = 2; p3[2] = 3;
    printf("address=%p, second value=%d\n", p3, p3[1]);
    
    MyStruct *p4 = (MyStruct*)calloc(4,sizeof(MyStruct));
p4[0].i = 1; p4[0].d = 3.14159; p4[0].a[0] = 'a';

    return 0; 
}
