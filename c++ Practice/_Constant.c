
// Practice With Constant in c language
#include<stdio.h>
int main()
{
    // --------------------------Not override the value in constant-----------------------
    //  const int num=15; //constacnt vlue
    // num=10; //error: assignment of read-only variable 'num' not (changed)
    // printf("%d", num);

    // ----------------------------------Create Constant right way---------------------------
    // const int minuteperhours=60;
    // const float PI=3.14;
    // printf("%d\n", minuteperhours);
    // printf("%f\n", PI);

    // -----------------------------------------Genrate Error----------------------------
    // const int minutesperhour;
    //     minutesperhour=60;
    //     printf("%d", minutesperhour); //Error

    // Note--->Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers

    // Example--->
    // const int BIRTH = 2000;
    // printf("%d\n", BIRTH);

    return 0;
}