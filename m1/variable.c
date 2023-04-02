#include <stdio.h>

int main()
{
    int my_num=10000;  // this is my integer variable
    float my_floatNum=12.4;
    char my_letter='A';//note; char data type print only single charter
    
    printf("This is my integer value: %d\n",my_num); 
    printf("This is my float value: %0.2f\n",my_floatNum);//note: 0.2 mean after . show two digit
    printf("This is my letter:  %c\n",my_letter);
    

    return 0;
}