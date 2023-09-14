#include <iostream> 
using namespace std;
int main()
{
 int start;
 int end;
 int count = 0;
 int i = 1;
 cout<<"\n enter the initial number: ";
 cin>>start;
 cout<<"\n enter the terminal number: ";
 cin>>end;
 cout << "Composite Numbers between " << start <<" and " << end <<": \n";
  start = start + 1;
 for(start=start; start<=end; start++)
 {
  for(i=1; i<=start; i++)
  {
   if(start % i == 0)
    count++;
  }
  if(count > 2)
   cout << start << " ";
  count = 0;
 }
 
 return 0;
}
