//In for loop basically we know the no of iteration means we know the how many times our loop will run 

// in case of while loop we don't know how many times our while loop will run ,  
// while loops are used in situations where we do not know the exact number of iterations of loop beforehand.
//  The loop execution is terminated on the basis of test condition.



//syntax of while loop
  
//  initialization expression;
// while (test_expression)
// {
//    // statements
 
//   update_expression;
// }
 
#include <iostream>
using namespace std;
int main(){
 // natural no. 5
  int i =1; // initialise
  while(i<=5){ // i =1 --> 1 <= 5 // 2 <= 5 // 3<= 5 // 4 <= 5 // 5 <= 5 // 6 ! <= 5
      cout<<i<<endl; // 1 2 3 4 5
      i++; // 2 3 4 5 6
  }

  

// H.w. (reminder)
//   int n = 5; 
//   while(n--){
//       cout<<n<<endl;
//   }

  return 0;
}














 