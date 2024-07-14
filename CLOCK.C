#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h> //allows calling of program to pause its execution  for a specified number of seconds,for sleep function
int main(){
int hour,minute,second;
hour=0;minute=0;second=0;
while(1)
{
    system("cls");
    printf("%02d :  %02d : %02d ",hour,minute,second);
    //clear output buffer in gcc
    fflush(stdout);
    second++ ;

   //update hour ,minute and second respectively
    if( second ==60)
    {
        minute=minute+1;
        second=0;
    }
    if( minute ==60)
    {
        hour = hour +1;
        minute =0;
    }
     if( hour == 24)
    {
        hour = 0;
        minute =0;
        second=0;
    }
    sleep(1);//wait till 1 second
}
return 0;
}







