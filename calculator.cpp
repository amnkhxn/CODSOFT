#include <iostream>
using namespace std;


void calculate(int a,int b){
  cout<<"Enter an operation"<<endl;
  char x;
  cin>>x;
  switch(x){
    case '+': cout<<"The answer is "<<a+b<<endl;
    break;
    case '-' :cout<<"The answer is "<<a-b<<endl;
    break;
    case '*' :cout<<"The answer is "<<a*b<<endl;
    break;
    case '/' :
      if(b!=0){
      cout<<"The answer is "<<a/b<<endl;
      }
      else{
        cout<<"Error"<<endl;
      }
    break;
    default: cout<<"Enter a valid operation"<<endl;
  }
}
int main()
{
    int a,b;
    cout<<"CALCULATOR"<<endl;
    cout<<endl;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    calculate(a,b);
    
}