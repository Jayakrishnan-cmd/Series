#include <iostream>
using namespace std;
int main() 
  {
  int num=0, i=0;
  cout<<"Enter the limit:";
  cin>>num;
  for(i=0;i<=num;i++) 
    {
    sum=sum+(i*i) ;
    }
  cout<<"\n The sum of square of the number";
  cout<<"upto"<<num<<"is";
  cout<<sum;
  return 0;
  }
