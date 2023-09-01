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
 * FUNCTION GetAndCkCandidateInfor
 * -----------------------------------------------------------------------------
 *    This function will read in as input the user's sex, height & weight.
 *        Sex input will be error checked within the following characters.
 *           'm', 'M', 'f', 'F', 'x', 'X'
 *    If 'x' or 'X' is input for sex the other values will not be input.
 *       Because 'x' or 'X' are the exit value for the main loop.
 *    All numerical input will be error checked within the following
 *       ranges (inclusively).
 *                Height: 24 - 110
 *                Weight: 50 - 1400
 *------------------------------------------------------------------------------
 * PRE-CONDITIONS
 *     The following arguments need to be variables - but do not need values
 *       sex    : person's sex
 *       height : person's height
 *       weight : person's weight
 *
 * POST-CONDITIONS
 *      ==> THE ARGUMENTS FOR FOLLOWING PARAMETERS WILL BE MODIFIED.
 *          Input read in in the function will be stored here and
 *          returned via the parameters.
 *                 sex
 *                 height
 *                 weight
 ******************************************************************************/
void GetAndCkCandidateInfor(char &sex,     // OUT - sex input from user
		                    int  &height,  // OUT - height input from user
							int  &weight)  // OUT - weight input from user
{
	/***************************************************************************
	 * CONSTANTS
   	 * -------------------------------------------------------------------------
	 * PROCESSING - The following represent the boundaries for the height &
	 *                weight and will be used for
	 *                error checking the input (these values are inclusive),
	 *                constant use to format the input prompt, input prompt,
	 *                and error messages.
	 *--------------------------------------------------------------------------
	 * HEIGHT_MIN : Minimum height
	 * HEIGHT_MAX : Maximum height
	 *
	 * WEIGHT_MIN : Minimum weight
	 * WEIGHT_MAX : Maximum weight
	 *
	 * PROMPT_COL : Used to format the input prompt
	 *
	 * INPUT_PROMPT        : Input prompt
	 * SEX_ERROR_PROMPT    : Input sex error message
	 * HEIGHT_ERROR_PROMPT : Input height error message
	 * WEIGHT_ERROR_PROMPT ： Input weight error message
	 **************************************************************************/
	const int HEIGHT_MIN             = 24;
	const int HEIGHT_MAX             = 110;

	const int WEIGHT_MIN             = 50;
	const int WEIGHT_MAX             = 1400;

	const int PROMPT_COL             = 8;

	const string INPUT_PROMPT        = "Please enter the candidate\'s "
			                           "information (enter \'X\' to exit).";
	const string SEX_ERROR_PROMPT    = " Invalid sex; please enter M or F ";
	const string HEIGHT_ERROR_PROMPT = " Invalid height; please enter a"
		                               " height in inches between ";
	const string WEIGHT_ERROR_PROMPT = " Invalid weight; please enter a"
			                           " weight in lbs between ";

	bool invalidSex;     // CALC - invalid sex range
	bool invalidHeight;  // CALC - invalid height range
	bool invalidWeight;  // CALC - invalid weight range

	/***************************************************************************
	 *  INPUT - The following code will read in a person's sex, height,
	 *          and weight.
	 *          sex, height and weight will be error checked.
	 **************************************************************************/
	cout << left;
	cout << INPUT_PROMPT << endl;

	// INPUT: Sex and error check
	do
	{
		cout << setw(PROMPT_COL) << "Sex: ";
		cin.get(sex);
		cin.ignore(10000, '\n');

		invalidSex = (sex != 'f' && sex != 'F' &&
					  sex != 'm' && sex != 'M' &&
					  sex != 'x' && sex != 'X');

		// PROC: if the input is invalid output an error message
		if (invalidSex)
		{
			cout << setfill('*');
			cout << setw(5) << '*';
			cout << SEX_ERROR_PROMPT;
			cout << setw(5) << '*';
			cout << setfill(' ');
			cout << endl;
		}
	}while (invalidSex);

	// If sex is == 'x' or 'X' then don't get the rest of the input
    if (sex != 'x' && sex != 'X')
    {
    	// INPUT: Height and error check between HEIGHT_MIN & HEIGHT_MAX
    	//        inclusively
    	do
        {
    	    cout << setw(PROMPT_COL) << "Height: ";
    	    cin  >> height;
    	    cin.ignore(10000, '\n');

    	    invalidHeight = height < HEIGHT_MIN || height > HEIGHT_MAX;

    	    // PROC: if the input is invalid output an error message
    	    if (invalidHeight)
    	    {
    	        cout << setfill('*');
    	        cout << setw(5) << '*';
    	       	cout << HEIGHT_ERROR_PROMPT
    	        	 << HEIGHT_MIN << " and " << HEIGHT_MAX << ". ";
    	    	cout << setw(5) << '*';
    	    	cout << setfill(' ');
    	    	cout << endl;
    	    }
        }while (invalidHeight);

    	// INPUT: Weight and error check between WEIGHT_MIN & WEIGHT_MAX
    	//        inclusively
    	do
    	{
    		cout << setw(PROMPT_COL) << "Weight: ";
    	    cin  >> weight;
    	    cin.ignore(10000, '\n');

    	    invalidWeight = weight < WEIGHT_MIN || weight > WEIGHT_MAX;

    	    // PROC: if the input is invalid output an error message
    	    if (invalidWeight)
    	    {
    	    	cout << setfill('*');
    	    	cout << setw(5) << '*';
    	    	cout << WEIGHT_ERROR_PROMPT
    	    	  	 << WEIGHT_MIN << " and " << WEIGHT_MAX << ". ";
    	    	cout << setw(5) << '*';
    	    	cout << setfill(' ');
    	    	cout << endl;
    	    }
    	}while (invalidWeight);
    }// END if
    cout << right;
}
