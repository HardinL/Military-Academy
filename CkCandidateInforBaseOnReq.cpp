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
 * FUNCTION CkCandidateInforBaseOnReq
 * -----------------------------------------------------------------------------
 *    This function will check the candidate's height and weight, determine
 *       whether candidate has been accepted or not.
 *    ==> returns nothing
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
 *               acceptableHeight
 *               acceptableWeight
 ******************************************************************************/

void CkCandidateInforBaseOnReq(char &sex,               // OUT - sex input
		                       int  &height,            // OUT - height input
		                       int  &weight,            // OUT - weight input
							   bool &acceptableHeight,  // OUT - acceptable
							                            //     - height range
							   bool &acceptableWeight)  // OUT - acceptable
                                                        //     - weight range
{
	if (sex != 'm' && sex != 'M')
	{
		// CALC: female acceptable conditions
		acceptableHeight = height >= 62 && height <= 75;
	    acceptableWeight = weight >= 110 && weight <= 185;
	}
	else
	{
		// CALC: male acceptable conditions
		acceptableHeight = height >= 65 && height <= 80;
		acceptableWeight = weight >= 130 && weight <= 250;
	} // END if
}
