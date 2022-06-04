#include<iostream>
using namespace std;

void palindrome(char a[], int len){
 
  int s=0;
  int e=len-1;
  while(s<e){
      if(a[s] != a[e]){
          cout<< "Not Palindrome";
          break;
      }
      else{
          s++;
          e--;
      }
  }
  cout<<"palindrome";

}

int main(){
    int count=0;
    char a[10];
    cout<<"Input an array"<<endl;
    cin>>a;
    for(int i=0;a[i] != '\0' ;i++){
        count ++;
    }
    int len = count;
    cout<< len<<endl;
    palindrome(a, len);
    
}