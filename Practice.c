

#include <stdio.h>


int C(int n, int r){

    if(n==0)
    return 1; 
    else if(r==0)
    return 1;
    else 
    return C(n-1,r) + C(n-1,r-1);
}


int main(){

int n,r;

scanf("%d%d",&n,&r);
        
int result = C(n,r);

printf("%d", result);

return 0;
}