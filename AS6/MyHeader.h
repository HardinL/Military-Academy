/*******************************************************************************
 * AUTHOR        : Hardin Liu
 * STUDENT ID    : 1230594
 * ASSIGNMENT #6 : Military Academy
 * CLASS         : CS1A
 * SECTION       : TTh: 8am
 * DUE DATE      : 12/01/21
 ******************************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>  /** cout                     **/
#include <iomanip>   /** setprecision() & fixed() **/
#include <string>
using namespace std;

/*******************************************************************************
 * PrintHeader
 *   This function receives an assignment name, type
 *   and number then outputs the appropriate header
 *   ==> returns nothing - This will output the class heading.
 ******************************************************************************/
void PrintHeader(string asName,  // IN - assignment Name - used for output
		         char   asType,  // IN - assignment type
			                	 //    - (LAB or ASSIGN) - used for output
				 int    asNum);  // IN - assign. number  - used for output

/*******************************************************************************
 * GetAndCkCandidateInfor
 *    This function will read in as input the user's sex, height & weight.
 *        Sex input will be error checked within the following characters.
 *           'm', 'M', 'f', 'F', 'x', 'X'
 *        If 'x' or 'X' is input for sex the other values will not be input.
 *           Because 'x' or 'X' are the exit value for the main loop.
 *        All numerical input will be error checked within the following
 *           ranges (inclusively).
 *                    Height: 24 - 110
 *                    Weight: 50 - 1400
 *    ==> the arguments into these parameters WILL BE MODIFIED
 *                 sex,
 *                 height,
 *                 weight
 ******************************************************************************/
void GetAndCkCandidateInfor(char &sex,      // OUT - sex input from user
		                    int  &height,   // OUT - height input from user
							int  &weight);  // OUT - weight input from user

/*******************************************************************************
 * CkCandidateInforBaseOnRequirement
 *    This function will check the candidate's height and weight, determine
 *       whether candidate has been accepted or not.
 *    ==> the arguments into these parameters WILL BE MODIFIED
 *                 sex,
 *                 height,
 *                 weight,
 *                 acceptableHeight,
 *                 acceptableWeight
 ******************************************************************************/
void CkCandidateInforBaseOnReq(char &sex,               // OUT - sex input
		                       int  &height,            // OUT - height input
		                       int  &weight,            // OUT - weight input
							   bool &acceptableHeight,  // OUT - acceptable
							                            //     - height range
							   bool &acceptableWeight); // OUT - acceptable
                                                        //     - weight range

/*******************************************************************************
 * OutputConclusion
 *    This function output the conclusion whether the candidate has been
 *        accepted or not base on requirement.
 *    ==> the arguments into these parameters WILL BE MODIFIED
 *                 acceptableHeight,
 *                 acceptableWeight,
 *                 acceptedCandidateCount
 ******************************************************************************/
void OutputConclusion(bool &acceptableHeight,        // OUT - acceptable height
		                                             //     - range
		              bool &acceptableWeight,        // OUT - acceptable weight
					                                 //     - range
					  int  &acceptedCandidateCount); // OUT - number of accepted
                                                     //     - candidate

/*******************************************************************************
 * OutputFinalResult
 *    This function output the final result whether the candidate has been
 *        accepted or not base on requirement.
 *    ==> the arguments into these parameters WILL BE MODIFIED
 *                 totalCandidates,
 *				   acceptedCandidateCout,
 *				   acceptedPerc
 ******************************************************************************/
void OutputFinalResult(int   &totalCandidates,       // OUT - number of total
		                                             //     - candidates
					   int   &acceptedCandidateCount,// OUT - number of accepted
					                                 //     - candidates
					   float &acceptedPerc);         // OUT - accepted percent

#endif /* MYHEADER_H_ */
