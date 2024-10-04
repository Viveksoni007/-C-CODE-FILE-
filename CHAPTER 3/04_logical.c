#include <stdio.h>

int main(){
    int a=1; int b=1;
    // int a=0; int b=1;
    // int a=0; int b=0;
    printf("The value of a and b is :%d\n",a&&b);
    printf("The value of a or b is :%d\n",a||b);
    printf("The value of note(a)  is :%d\n",!a);

    if(a && b){
        printf("both are trure \n");
    }
    //is same writing like this
    if(a){
        if(b){
            printf("both are same true 222");
        }
        
    }
    return 0;
}