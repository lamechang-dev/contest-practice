#include <iostream>

using namespace std;

int main()
{
   int l,s,sum=0,c=0;
   cin>>l>>s;
   for(int i=0;i<=l;i++)
   {
     for(int j=0;j<=l;j++)
     {
         for(int k=0;k<=l;k++)
         {
             sum=i+j+k;
             if(sum==s)
             {
                 c++;
             }
         }
     }
   }
   cout << c;
    return 0;
}
