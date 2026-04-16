#include<stdio.h>
#include<cs50.h>
int main(void){
              char c = get_char("do you need install this\n");
              if( c=='y' || c=='Y'){
                     printf("GG\n");
              }
              else if( c=='f' || c=='F'){
                     printf("No GG\n");
              }
}
