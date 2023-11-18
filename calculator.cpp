#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
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
    case '/' :cout<<"The answer is "<<a/b<<endl;
    break;
    default: cout<<"Enter a valid operation"<<endl;
  }
}
int main()
{
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    calculate(a,b);
    
}