/*******************************************************************************
 * AUTHOR        : Hardin Liu
 * STUDENT ID    : 1230594
 * ASSIGNMENT #6 : Military Academy
 * CLASS         : CS1A
 * SECTION       : TTh: 8am
 * DUE DATE      : 12/01/21
 ******************************************************************************/

#include "MyHeader.h"

/*******************************************************************************
 * FUNCTION PrintHeader
 *------------------------------------------------------------------------------
 *   This function receives an assignment name, type
 *       and number then outputs the appropriate class heading.
 *   ==> returns nothing - This will output the class heading.
 *------------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     The following need a defined value passed in
 *        asName: Assignment Name
 *        asType: Assignment Type
 *        asNum : Assignment Number
 *
 * POST-CONDITIONS
 *     ==> Returns nothing - This function will output the class heading.
 ******************************************************************************/
void PrintHeader(string asName,  // IN - assignment Name - used for output
                 char   asType,  // IN - assignment type
                                 //    - (LAB or ASSIGN) - used for output
                 int    asNum)   // IN – assign. Number  - used for output
{
  cout << left;
  cout << "**************************************************\n";
  cout << "*  PROGRAMMED BY : Hardin Liu\n";
  cout << "*  " << setw(14) << "STUDENT ID" << ": 1230594\n";
  cout << "*  " << setw(14) << "CLASS" << ": CS1A - TTh - 8a-10:20a\n";
  cout << "*  " ;

  // PROCESSING – This will adjust setws and format appropriately
  //              based on if this is a lab ‘L’ or assignment
  if (asType == 'l' || asType == 'L')
  {
      cout << "LAB #" << setw(9);
  }
  else
  {
      cout << "ASSIGNMENT #" << setw(2);
  }
  cout << asNum << ": " << asName << endl;
  cout << "**************************************************\n\n";
  cout << right;
}
