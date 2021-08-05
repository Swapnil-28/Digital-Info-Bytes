#include <iostream>
using namespace std;

int fun(int j) {
  
  int cnt = 0;
  
  if(j <=0)
    retunr -1;
    
   for(int i=3; i<=j; i++) {
      if(i%3 == 0)
        cnt++;
   }
   return cnt;
}
int main() {
  
  int j = 97;
  int res = fun(j);
  
  if(res < 0)
    cout<<"please provide valid input\n";
  else
    cout<<res;
  return 0;
}
