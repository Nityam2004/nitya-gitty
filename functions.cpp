#include <iostream>
using namespace std;
//here main is also a type of function
//itna maza kyu aa rha hai kisne hawa me bhang milaya meri malmal ki kurti gulabi ho gyi 
//balam pichkari jotune mujhe mari to sidhi sadhi chori sarabi hogyi jeans pahanke jotune mara thumka to sidhi sadhi chori
// sarabi hogyi
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"\n hello, good morning";
}
int main(){
int num1,num2;
cout<<"Enter the first number  "<<endl;
cin>>num1;
cout<<"Enter the second number"<<endl;
cin>>num2;
cout<<"Sum of the numbers is---"<<sum(num1,num2);
g();

return 0;
}