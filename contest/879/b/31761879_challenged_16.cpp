
/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n,k,max;
    scanf("%lld %lld",&n,&k);
    long long data[n],i,temp[n];
    for(i=0;i<n;i++){
        scanf("%lld",&data[i]);
        temp[i]=data[i];
    }
    sort(temp,temp+n);
    max=temp[n-1];
    if(k>=n-1){
        sort(data,data+n);
        printf("%lld\n",data[n-1]);
        return 0;
    }
    else{
        long long start=data[0],len=-1;
        for(i=0;i<n;i++){
            if(data[i]==max){
                printf("%lld\n",max);
                return 0;
            }
            if(start>=data[i])
                len++;
            else{
                start=data[i];
                len=0;
            }
            if(len==k){
                printf("%lld\n",start);
                return 0;
            }
        }
 
    }
    return 0;
}