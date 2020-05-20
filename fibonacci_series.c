#include<stdio.h>
#include<conio.h>
void fibo(int num);
	int main(){
		int num;
		fibo(num);
		return num;
}
 void fibo(int aj)
 {
 	int a,b,c, i=0;
 	while(i<= 10)  //Series upto 10 terms.
 	{
 		c = a+b;
 		printf("\nIn this term during calculation values of  A,B,C,I were as follows:- i=%d a=%d b=%d c=%d",i,a,b,c);
 		printf("\n\t%d", c);
 		a = b;
 		b = c;
 		i++;
	 }
	 printf("\n\n\tHope you like it :) \n\t\t Thank you!");
	 getch();
 }
