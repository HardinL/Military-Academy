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
 * FUNCTION OutputConclusion
 * -----------------------------------------------------------------------------
 *   This function output the conclusion whether the candidate has been
*        accepted or not base on requirement.
*    ==> returns nothing ==> it will output the conclusion.
 *------------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     The following need to be booleans expression.
 *       acceptableHeight : candidate's height meets the requirement
 *       acceptableWeight : candidate's weight meets the requirement
 *
 * POST-CONDITIONS
 *    ==> THE ARGUMENTS FOR FOLLOWING PARAMETERS WILL BE MODIFIED.
 *        Input read in the function will be stored here and
 *        returned via the parameters.
 *               acceptedCandidateCount
 ******************************************************************************/
void OutputConclusion(bool &acceptableHeight,        // OUT - acceptable height
		                                             //     - range
		              bool &acceptableWeight,        // OUT - acceptable weight
					                                 //     - range
					  int  &acceptedCandidateCount)  // OUT - number of accepted
                                                     //     - candidate
{
	const string OUTPUT_PROMPT = "\nThis candidate has been ";

	if (acceptableHeight)
	{
		if (acceptableWeight)
		{
			acceptedCandidateCount++;
			cout << OUTPUT_PROMPT << "ACCEPTED!\n\n\n";
		}
		else
		{
			cout << OUTPUT_PROMPT << "rejected based on the "
					                 "WEIGHT requirement.\n\n\n";
		} // END - if(acceptableWeight)
	}
	else
	{
		if (acceptableWeight)
		{
			cout << OUTPUT_PROMPT << "rejected based on the "
					                 "HEIGHT requirement.\n\n\n";
		}
		else
		{
			cout << OUTPUT_PROMPT << "rejected based on the "
				                   	 "HEIGHT and WEIGHT requirements.\n\n\n";
		} // END - if(acceptableWeight)
	} // END - if(acceptableHeight)
}
