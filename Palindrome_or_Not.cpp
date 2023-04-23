#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int number;
    cout<<"Enter a positive integer: ";
    cin>>number; 

    int mainvalue = number; 
    int lastdigit; 
    int reverse = 0; 


    while(mainvalue > 0)
    {

        lastdigit = mainvalue % 10; 
        reverse = reverse * 10 + lastdigit;
        mainvalue = mainvalue/10; 

    }

   if(number == reverse)
   {
    cout<<number<<" is a palindrome number."<<endl;
   }
   else
   {
    cout<<number<<" is not a palindrome number."<<endl;
   }

    return 0; 
}
