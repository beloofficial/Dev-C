#include <stdio.h>
#include <iostream>
#include <cstdio>

using namespace std;

#define N 20000
unsigned int a[N];
int i, j, s, n;

int main(){

cin >> n;

	for(i=0; i<N; i++){
  	a[i] = i;
  }
  
  a[1]=0;
  for(int s=2; s<N; s++){
  	if(a[s]!=0){
    	for(int j=s*2; j<N; j+=s){
      	a[j]=0;
      }
    }
  }
  for(i=0; i<n; i++){
  	if(a[i]!=0){
    	printf("%d\n", a[i]);
 		}
  }
}