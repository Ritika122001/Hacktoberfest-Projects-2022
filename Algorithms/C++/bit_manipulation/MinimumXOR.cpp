/**
 * @file Minimum XOR
 * @brief Program of [Minimum XOR]
 *
 * @details
 * Given two positive integers num1 and num2, find the integer x such that:
   x has the same number of set bits as num2, and
    The value x XOR num1 is minimal.
   Note that XOR is the bitwise XOR operation.
   Return the integer x. The test cases are generated such that x is uniquely determined.
   The number of set bits of an integer is the number of 1's in its binary representation.

// Example 1:

// Input: num1 = 3, num2 = 5
// Output: 3
// Explanation:
// The binary representations of num1 and num2 are 0011 and 0101, respectively.
// The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minimal.
 *

 **/

#include<bits/stdc++.h>
using namespace std;

int minimizeXor(int num1, int num2) {
        
     int cnta = __builtin_popcount(num1), cntb = __builtin_popcount(num2); 
     //____builtin_popcount for counting the set bits in the number
        
        int ans=0;
        
        if(cnta==cntb)   //if the count of both the numbers are equal 
        {
            return num1;  //return the num1 because xor of num1 and num1 will be minimum =0 
        } 
         
        else if(cnta>cntb) {   //if the count of num1 > count of num2
          
            int diff = cnta-cntb; // take the difference
            
            while(diff>0)
            {
                
                num1= num1&(num1-1);  //drop left most set bit from num1

                diff--;
                
            }
            
            
        }
        
        else{
            
 
            int diff = cntb-cnta;  //take the difference
            while(diff > 0) 
            {
                 num1 = num1|(num1+1); //Add left most set bits to num1
                diff--;
            }
      
        }
        
        return num1;
        
        
    }


int main()
{


int a;
int b;
cin>>a>>b;


cout<<minimizeXor(a,b);

return 0;

}