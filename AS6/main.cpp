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
* Military Academy
*-------------------------------------------------------------------------------
*    This program will check candidates' informations input and output as many
*       conclusions whether they have been accepted or not until user inputs a
*       'x' or 'X' for the sex input. The candidate's information will be
*       checked based on the candidate's sex, height requirement, and weight
*       requirement. When user finished input candidates' information, input 'x'
*       or 'X' for sex, the program will output the number of accepted
*       candidates and accepted percentage.
*-------------------------------------------------------------------------------
* INPUT
*    The following information will be input for information check
*       sexM    : The sex of candidate
*       heightM : The height in inches
*       weightM : The weight in lbs
*
* OUTPUT
*       acceptedCandidate : The number of accepted candidates.
*       acceptedPerc      : The accepted percentage calculated based on number
*                           of accepted candidates and total candidates.
*******************************************************************************/
int main()
{
	char  sexM;                    // IN & CALC  - The sex of candidate
	int   heightM;                 // IN & CALC  - The height of candidate
	int   weightM;                 // IN & CALC  - The weight of candidate
	int   totalCandidates;         // IN & CALC  - The number of total
	                               //            - candidates
	int   acceptedCandidateCount;  // CALC & OUT - The number of accepted
	                               //            - candidates
	float acceptedPerc;            // CALC & OUT - The accepted percentage
	bool  acceptableHeight;        // CALC       - The acceptable height range
	bool  acceptableWeight;        // CALC       - The acceptable weight range

	// OUTPUT: Class heading to the console
	PrintHeader("Military Academy", 'A', 6);

	// INITIALIZATION
	totalCandidates = 0;
	acceptedCandidateCount = 0;

	/***************************************************************************
	 * INPUT - gets the sex, height, weight - all arguments will be modified in
	 *         this function and will contain input values
	 **************************************************************************/
	GetAndCkCandidateInfor(sexM, heightM, weightM);

	/***************************************************************************
	 * PROCESSING - This is the primary loop for the program.
	 *              It will read in input, check and output the conclusion
	 *              whether candidate has been accepted or not until the user
	 *              inputs 'x' or 'X'. It will calculate and output number of
	 *              accepted candidates and accepted percentage when the user
	 *              inputs 'x' or 'X' for sex.
	 **************************************************************************/
    while(sexM != 'x' && sexM != 'X')
    {
    	// Change variable
    	totalCandidates++;

    	// PROCESSING - Check candidate's information base on requirement.
    	CkCandidateInforBaseOnReq(sexM, heightM, weightM,
    			                  acceptableHeight, acceptableWeight);

    	// OUTPUT - Outputs the conclusion.
    	OutputConclusion(acceptableHeight, acceptableWeight,
    			         acceptedCandidateCount);

    	/***********************************************************************
    	 * INPUT - gets the sex, height, weight - all arguments will be modified
    	 *         in this function and will contain input values
    	 **********************************************************************/
    	GetAndCkCandidateInfor(sexM, heightM, weightM);

    } // END while

    // OUTPUT - Output the number of accepted candidates and accepted percentage
    OutputFinalResult(totalCandidates, acceptedCandidateCount, acceptedPerc);

    return 0;
}


