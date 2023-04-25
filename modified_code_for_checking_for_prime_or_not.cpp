#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int n; 
    cin>>n; 
     
    int count = 0;  

    for(int i=2; i<=sqrt(n); i++) // i=2 because 1 is already a prime number; 
    {  
        if(n==2)
        {
            cout<<"It is prime number"<<endl;
            break;
        }
        else
        {
            if(n%i==0)
                {
                   cout<<"Non-Prime number";
                   count = 1; 
                   break;
                }
             
        }
        
    }
    if(count == 0)
    {
        cout<<"It is a Prime number";
    }

    return 0; 
}