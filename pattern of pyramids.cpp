#include <iostream>

using namespace std;

int main()
{
      int rows;
     int num=1;
     cin>>rows;
     for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num=num+1;

     }
cout<<"\n";
     }

    return 0;
}
