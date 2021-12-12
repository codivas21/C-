// The main diff in while and Do while loop is 
// in while loop the we test the conidtion before entering in the loop
// in case of Do-while loop we test the condition at the end of the loop body

// In do while loop the loop body will execute at least once irrespective of test condition.

 

#include <iostream>
using namespace std;
int main(){


//syntax of Do-while loop is
// initialization expression; // int i =0;
// do
// {
//    cout<<"hello codivas"<<endl;
//    // statements

//    update_expression; // i++ = 1
// } while (test_expression);




 int i = 2; // Initialization expression
  
    do
    {
        // loop body
        cout << "Hello Codivas\n";
  
        // update expression
        i++; // 3
  
    }  while (i < 1);   // test expression

    return 0;
}