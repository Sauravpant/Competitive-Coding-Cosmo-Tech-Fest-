#include<iostream>
using namespace std;
int main() {
  
  for(int i=0;i<5;i++) {
    int count=0;
    int num=(2*i+1);
    for(int j=0;j<9;j++) {
      if(i+j>=4 && count<num) {
      cout<<"*";
      count++; }
      else 
      cout<<" ";
      if(count>num) break;
    }
    cout<<endl;
  }
  
  return 0;
}
// Output: 
//     *    
//    ***   
//   *****  
//  ******* 
// *********
