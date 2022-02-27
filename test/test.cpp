/** @defgroup group1 The First Group
 *  This is the first group
 *  @{
 */

#include <iostream>
#include "func.h"

/** @brief class Calculator, in group 1
 * 
 * 
 * 
 * In latest version i hope to add class sinature, that will be used to create my own console calculator
 */
class Calculator {};


/** 
 * Main of function, entry point
 * 
 * In execution you need to input to integer, and program show sum of these numbers
 * 
 * @return {int} exitcode - if return 0, then program was executed succesfull 
 */
int main()
{
	int x, y;
    std::cin >> x >> y;
    std::cout << "The sum is " << add(x, y) << std::endl;
    return 0;
}

/** @} */ // end of group1
