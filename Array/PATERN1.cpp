#include<iostream>
#include"bits/stdc++.h"

using namespace std;

int main(){
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
//     for (int i= 1;i<=5;i++){
//         for (int j = 1;j <= 5; j++)

//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 

// for (int i = 0; i < 4; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;
// }

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// int count = 1;
// for (int i = 1; i <= 4; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }

// AAAA
// BBBB
// CCCC
// DDDD
// for (int i = 1; i <= 4; i++)
// {
//     for (int j = 1; j <= 4; j++)
//     {
//         char ch = 'A' + i -1;
//        cout<<ch;
//     }
//     cout<<endl;
// }
// A
// BC
// DEF
// GHIJ
// char ch = 'A';
// for (int i = 1; i <= 4; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<ch;
//         ch++;
//     }
//     cout<<endl;
// }

// A 
// B C 
// C D E 
// D E F G 

// for (int i = 1; i <= 4; i++)
// {
//     for (int j = 1; j <=i ; j++)
//     {
//         char ch = 'A'+i+j-2;
//         cout<<ch <<" ";}

//     cout<<endl;
// }
// D 
// C D 
// B C D 
// A B C D 
// int n = 4;
// for (int i = 1; i <= n; i++)
// {

//     char ch = 'A'+ n-i;
//     for (int j = 1; j <=i ; j++)
//     {
        
//         cout<<ch <<" ";
//         ch++;}
        

//     cout<<endl;
// }


//      *
//     **
//    ***
//   ****
//  *****
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n-i; j++)
//     {
//         cout<<" ";
//     }
    
    
//     for (int k = 1; k <=i ; k++)
//     {
        
//         cout<<"*";}
        
        

//     cout<<endl;
// }





// *****
// ****
// ***
// **
// *
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
     
//     for (int k = 1; k <=n-i+1 ; k++)
//     {
        
//         cout<<"*";}
        
        

//     cout<<endl;
// }
// *****
//  ****
//   ***
//    **
//     *
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <i ; j++)
//     {
//         cout<<" ";
//     }
    
    
//     for (int k = 1; k <=n-i+1 ; k++)
//     {
        
//         cout<<"*";}
        
        

//     cout<<endl;
// }


// 11111
//  2222
//   333
//    44
//     5
// int count = 1;
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <i ; j++)
//     {
//         cout<<" ";
//     }
    
    
//     for (int k = 1; k <=n-i+1 ; k++)
//     {
        
//         cout<<count;}
        
        
//         count++;
//     cout<<endl;
// }

//     1
//    121
//   12321
//  1234321
// 123454321
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <n-i+1 ; j++)
//     {
//         cout<<" ";
//     }
    
    
//     for (int k = 1; k <=i ; k++)
//     {
        
//         cout<<k;}
//      for (int l = i-1; l >=1 ; l--)
//     {
        
//         cout<<l;}
        

//     cout<<endl;
// }


// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <=n-i+1 ; j++)
//     {
//         cout<<j;
//     }
    
    
//     for (int k = 1; k <=i-1 ; k++)
//     {
        
//         cout<<"*";}
//      for (int k = 1; k <=i-1 ; k++)
//     {
        
//         cout<<"*";}
//      for (int l = n-i+1; l >=1 ; l--)
//     {
        
//         cout<<l;}
        

//     cout<<endl;
// // }
// ****
// *  *
// *  *
// *  *
// ****
    // for (int i= 1;i<=5;i++){
    //     for (int j = 1;j <= 4; j++)

    //     {
    //         if (i == 1 || i == 5 || j == 1 || j == 4) 
    //         cout<<'*';
    //         else
    //         cout<<' ';
    //     }
    //     cout<<endl;
    // }
//     1
//    212
//   32123
//  4321234
// 543212345    
// int n = 5;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <n-i+1 ; j++)
//     {
//         cout<<" ";
//     }
    
    
//     for (int k = i; k >1 ; k--)
//     {
        
//         cout<<k;}
//      for (int l = 1; l <=i ; l++)
//     {
        
//         cout<<l;}
        

//     cout<<endl;
// }

//   *   *  
//  * * * * 
// *   *   *
//     for (int i= 1;i<=3;i++){
//         for (int j = 1;j <= 9; j++)

//         {
//             if (((i +j)%4==0) || (i==2 && j%4==0)) 
//             cout<<'*';
//             else
//             cout<<' ';
//         }
//         cout<<endl;
//     }


// int n= 234;
// int sum = 0;
// int prod = 1;
// int dif;

// while(n>0){
//     int rem = n%10;
//     sum += rem;
//     prod *= rem;
//     n = n/10;

// }

// dif = prod - sum;
// cout<<sum <<"  "<<prod<<"  "<<dif<<endl;




// Even odd number
// int n = 6;
// if(n&1==1){
//     cout<<n<<" is odd number";
// }
// else
//     cout<<n<<" is even number";


// swaping two variable without using 3rd variable

// int a = 7;
// int b = 5;
// cout<<a<<"  "<<b<<endl;
// a = a^b;
// b = a^b;
// a = a^b;

// cout<<a<<"  "<<b<<endl;

// // find i bit
// int n = 7;
// int mask = 2; // bit you want to find

// int number = 1<<mask;

// if((number & n) == 0){
//     cout<<mask<<"  bit of "<<n <<" is: "<< 0;
// }
// else
// cout<<mask<<"  bit of "<<n <<" is: "<< 1;


// Set  i bit
// int n = 8;
// int mask = 2; // bit you want to find

// int number = 1<<mask;

// cout<<"Before Set bit "<<n<<endl;
// int set_bit = n | number;

// cout<<"After Set bit "<<set_bit<<endl;

// clear  i bit
// int n = 7;
// int mask = 2; // bit you want to find

// int number = 1<<mask;
// cout<<number<<endl;

// cout<<"Before clear bit "<<n<<endl;
// int clear_bit = ~number;
// cout<<clear_bit<<endl;

// n = n & clear_bit;

// cout<<"After clear bit "<<n<<endl;


// number of bits need to change to convert one number ito other;
// int n1 = 3;
// int n2 = 1; // bit you want to find

// int number = n1 ^ n2;

// int count = 0;
// while(number !=0){
//     if((number&1)==1){
//         count++;
//        number = number>>1;
//     }
//     else
//    number =  number>>1;
// }
// cout<<count<<endl;


// number of bits need to change to convert one number ito other     (using (n&(n-1)));
// int n1 = 7;
// int n2 = 8; // bit you want to find

// int number = n1 ^ n2;

// int count = 0;
// while(number !=0){
//     number = number & (number-1);
//      count++;
// }
// cout<<count<<endl;


int n;
cout<<"Enetr number ";
cin>>n;















     return 0;
    
}

