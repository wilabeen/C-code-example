/* Wil Deering, November 12 2018, CSCI 2132, A5
This program takes in a specified number of strings of digits,
and checks to see if the string passes Luhn's checksum,
printing whether it does or not */
#include <stdio.h>

int luhn_checksum(int len, int a[]);

int main(){
  int trials,i;
  scanf("%d",&trials);
  getchar();
  for(i=0; i < trials; i++){
    char ch[51];
    int n = 0, m; 
    scanf("%50s",&ch);
    while(ch[n] != '\0'){
      n+=1;
    }
    int a[n];
    for(m = 0; m < n; m++) { a[m] = ch[m] - '0';}
    if(luhn_checksum(n, a)) printf("PASS\n");
    else printf("FAIL\n");
  }
}

int luhn_checksum(int len, int a[]){
  int i, sum =0;
  for(i = 0; i < len; i++){
    if((len+i)%2 == 0){
      a[i] = 2*a[i];
      int o = a[i]/10;
      a[i] = o + a[i]-(o*10);
    }
    sum += a[i];
  }
  if(sum%10 == 0) return 1;
  else return 0;
}
