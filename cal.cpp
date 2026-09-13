#include<stdio.h>//header files
#include<iostream>
using namespace std;
int basic_cal(){
	int num1,num2;
	char symbol,stop;
	float sum;
	
	printf("Enter a number:");cin>>num1;
	printf("[+,-,*,/]");cin>>symbol;
	printf("Enter a number:");cin>>num2;
	switch(symbol){
	case '+':
		sum=num1+num2;
		break;
	case '-':
		sum=num1-num2;
		break;
	case '/':
		sum=num1/num2;break;
	case '*':
		sum=num1*num2;break;
	default:
		printf("invaild input");
	}
    cout<<num1<<symbol<<num2<<" is  "<<sum;
	
    return 0;
}



int main(){
	basic_cal();//for forking

}
