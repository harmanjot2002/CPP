#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,sum=0,med,mean;
    float medSum=0;
    cin>>n;
    int A[n];
    for (i=0;i<n;i++){
        cin>>A[i];
    }
    for (i=0;i<n;i++){
        sum+=A[i];
    }
    mean=sum/n;
    cout<<"sum is "<<sum<<endl;
    cout<<"mean is "<<mean<<endl;;
    if(n%2!=0){
        for (i=0;i<=(n-1)/2;i++){
        med=A[i];
        }
        cout<<"med is "<<med;
    }
    else{
        for(i=1;i<=n;i++){
            if((i==n/2)||(i==n/2-1))
                medSum=medSum+A[i];
        }
        cout<<"med is "<<medSum/2;
    }
    return 0;
}