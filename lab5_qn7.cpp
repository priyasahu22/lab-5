#include<iostream>
using namespace std;

//check whether an input value is an alphabet or not
int main()
{
   char a;
 cout<<"\n Enter any character:";
  cin>>a;
  int b;
  b=int(a);
 cout<<"\n"<<b;
if((b>64 && b<91) || (b>96 && b<123))
{
   cout<<"\n it is an alphabet:";

}
else
{

  cout<<"\n it is not alphabet:";
}
return 0;
}
