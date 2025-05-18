#include   <stdio.h>
int main(){
int x = 10;
{
    int y = x*2;
    {
        int y = x + 1;
        x= 1;
        printf("%i,%i\n", ++x,--y);
    
}
}
return 0;

}