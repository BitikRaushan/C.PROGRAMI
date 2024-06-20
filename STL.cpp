#include <iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>a;
  a.push_back(5);
  a.push_back(9);
  a.push_back(8);
  cout<<"capacity of vector  -"<<a.capacity()<<endl;
  cout<<"kitta jagh hau  -"<<a.size()<<endl;
  cout<<"true ya falsle- "<<a.empty()<<endl;
  a.pop_back();
  cout<<"kitta jagh hau  ="<<a.size()<<endl;
 
  for(int i:a){
    cout<<a[i]<<" ";
  }

  return 0;
}

