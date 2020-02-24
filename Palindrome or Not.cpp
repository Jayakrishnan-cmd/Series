#include <iostream>
using namespace std;
int main()
  {
  int num, copy, digit, rev=0;
  cout<<"Enter the number:";
  copy=num;
  cin>>num;
  while(num!=0) 
    {
    digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;
    }
  cout<<"The reverse of the number is:"<<rev;
  if(rev==copy) 
    cout<<"\n The given number is a palindrome ";
  else
    cout<<"\n It is not a palindrome";
  return 0;
  }
    
    
