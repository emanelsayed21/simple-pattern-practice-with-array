#include <iostream>

using namespace std;

int main()
{
  ///written by eman elsayed
  int rows,e=1;
  cin>>rows;
  for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows-i;j++)  cout<<" ";
    for(int a=1;a<=e;a++)  cout<<"* ";
    cout<<"\n";
    e=e+1;
  }


    return 0;
}
