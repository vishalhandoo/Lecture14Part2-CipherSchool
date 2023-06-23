#include<bits/stdc++.h>
using namespace std;


void minandmax(int *a, int max , int min){
    int small=a[0],large=a[0];
    for(int i = 1 ; i < 6 ; i++){
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }

    }
}



int main(){
    
    int a[5];
    int max;
    int min;
    for(int i = 0 ; i <6 ; i++){
        a[i]=i;
    }

    minandmax(a,max,min);
    return 0;
}