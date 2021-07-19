#include<stdio.h> 
int main() 
{ 
 float farenheet,celc; 
 printf("Enter the temp in fahrenheit = "); 
 scanf("%f",&farenheet); 
 celc=(5.0/9)*(farenheet-32); 
 printf("%.2f fareheit in celsius is %.2f C", farenheet, celc); 
 return 0; 
}
