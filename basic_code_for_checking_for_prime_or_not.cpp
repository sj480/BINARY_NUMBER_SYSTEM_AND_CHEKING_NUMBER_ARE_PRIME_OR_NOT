#include <iostream>
using namespace std; 

int main()
{
    int n; 
    cin>>n; 

    for(int i=2; i<=n; i++) // i=2 because 1 is already a prime number; 
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
                      cout<<"It is not prime number"<<endl;
                      break;
                }
            else
                {
                      cout<<"It is prime number"<<endl;
                      break;
             }       
        }
    }

    return 0; 
}