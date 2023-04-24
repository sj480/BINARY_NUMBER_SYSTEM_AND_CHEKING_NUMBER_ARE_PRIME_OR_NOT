#include <iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter any number: ";
    cin>>n; 
    int fact = 1; 
    int ans = 0; 

    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    while(fact % 10 == 0)
    {
        fact /= 10; 
        ans++; 
    }

    cout<<ans<<endl;

    return 0; 
}