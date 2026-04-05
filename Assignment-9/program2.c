// 1 $ = 70 rs
//accept amout in us dollars and return its correspondingf value in indian rs 

#include<stdio.h>
float Display(float Dollar)
{
    float rate = 70.0f;
    float INR = 0.0f;
     
    INR = Dollar * rate;
    return INR;

}
int main()
{
    float USD =0.0f;
    float Rupees =0.0f;
    float fRet =0.0f;
    printf("Enter USD value :\n");
    scanf("%f",&USD);

    fRet =Display(USD);
    
    printf("Amount in INR IS : %2f\n",fRet);


    return 0;
}