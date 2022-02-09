#include<iostream>
using namespace std;
int main(){
    

    // 0,1,1,2,3,5,8,13,21........ 

     int n,i,sum;
     int a=0;
     int b=1;
     cout<<"Enter the number"<<endl;
     cin>>n;
     cout<<a<<" "<<b<<" ";
     for (i = 1; i<=n; i++)
     {
         int nextfib=a+b;
         a=b;
         b=nextfib;
     cout<<nextfib<<" ";
        
     }
     
}