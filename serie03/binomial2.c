#include<stdio.h>

int binomial(int n, int k);

int main()
{
        int n,k;
        printf("Enter n and k : ");
        scanf("%d%d",&n,&k);
        if (n<k) {
                printf("n muss grösser sein als k!!\n");
        } else {
                printf("Binomialkoeffizient von %d über %d = %d\n", n,k,binomial(n,k));     
        }


        return 0;
}

int binomial(int n, int k)
{ 
        if(k==0 || k==n) {
                return 1;
        }
        return binomial(n-1,k-1) + binomial(n-1,k);s
}