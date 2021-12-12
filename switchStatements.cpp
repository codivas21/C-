



// syntax of switch Statements 


// switch(expression) {   // if(expre) // if () --> else if() --> else if() ---------------else
//    case constant-expression  :
//       statement(s);
//       break; //optional
//    case constant-expression  :
//       statement(s);
//       break; //optional
  
//    // you can have any number of case statements.
//    default : //Optional
//       statement(s);
// }

#include <iostream>
using namespace std;
int main(){

// local variable declaration:
   char grade = 'D';

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl; 
         break;
      case 'B' :
      case 'C' :
         cout << "Well done" << endl;
         break;
      case 'D' :
         cout << "You passed" << endl;
         break;
      case 'F' :
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;





//    //Nested Switch Statements
//    switch(ch1) {
//    case 'A': 
//       cout << "This A is part of outer switch";
//       switch(ch2) {
//          case 'A':
//             cout << "This A is part of inner switch";
//             break;
//          case 'B': // ...
//       }
//       break;
//    case 'B': // ...
// }



 


   return 0;

}
 