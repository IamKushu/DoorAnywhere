#include<iostream>
using namespace std;

int count(int a[],int n,int sum){
    int i, j;
    int count =0;
    for (i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]+a[j]==sum)
                count ++;
return count;

}

int main(){
    int a[]={2,3,1,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    int sum = 6;
    cout<<count (a,n,sum);
    
    return 0;
}