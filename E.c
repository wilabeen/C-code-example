/* Wil Deering, November 12 2018, CSCI 2132, A5
This programs reads words (alphabet characters) from
the satandard input and prints each word out on a line */
#include <stdio.h>

int main(){
  int state = 0;
  char c = '\n';
  while((c = getchar()) != EOF){
    if(state == 0){
      if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
	putchar(c);
	state = 1;
      }
    }

    else if(state == 1){
      if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
	putchar(c);
      }
      else{
	putchar('\n');
	state = 0;
      }
    }
  }
}
