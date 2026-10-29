#include<stdio.h>
#include<math.h>

int main(void){
float pi = 3.1415f;

 for(int i=0, i < 32, i++)
    {
    float angle = 2*pi*i/32.0f;
    float sample = sinf(angle);
    printf("%f\n"sample);
}
return 0;
}
