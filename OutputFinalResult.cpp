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
 * FUNCTION OutputFinalResult
 * -----------------------------------------------------------------------------
 *   This function output the final result that how many candidates has been
 *      accepted and accepted percentage when user input 'x' or 'X' for sex.
 *   ==> returns nothing ==> it will output the final result.
 *------------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     The following need a defined value passed in
 *       totalCandidates: number of total candidates used to calculate the
 *                        accepted percentage.
 *       acceptedCandidateCount: number of accepted candidates used to calculate
 *                               the accepted percentage.
 *       acceptedPerc: accepted percentage.
 * POST-CONDITIONS
 *    ==> THE ARGUMENTS FOR FOLLOWING PARAMETERS WILL BE MODIFIED.
 *        Input read in the function will be stored here and
 *        returned via the parameters.
 *               acceptedPerc
 ******************************************************************************/
void OutputFinalResult(int   &totalCandidates,       // OUT - number of total
		                                             //     - candidates
					   int   &acceptedCandidateCount,// OUT - number of accepted
					                                 //     - candidates
					   float &acceptedPerc)          // OUT - accepted percent

{
	// if totalCandidates is = 0 then don't output result
	if (totalCandidates != 0)
	{
		// PROC: calculate the accepted percentage
		cout << setprecision(2);
		acceptedPerc = acceptedCandidateCount / float(totalCandidates) * 100;

		// OUTPUT: final result
		cout << endl;
		cout << acceptedCandidateCount << " candidate(s) " << "accepted!\n";
		cout << "That\'s " << acceptedPerc << "%!";
		cout << setprecision(6);
	} // END if
}
