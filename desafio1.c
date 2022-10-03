#include <stdio.h>
#include <conio.h>

int main(){

int i=0,j=0,n=9,k=0;

for(i=0; i<n; i++){

k=1;

for(j=0; j<(n+i); j++){

if(j<n-i-1)

printf("");

else{

printf(" %d",k);

if(j<(n-1))

k++;

else

k--;
}}

printf("\n");
}}