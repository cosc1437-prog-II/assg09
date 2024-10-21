/** @file assg08-library.cpp
 *
 * @brief Implementation file for Assignment 08: Arrays: Processing Arrays of Values
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   September 15, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <cmath>
using namespace std;

/** @brief Sum values of array
 *
 * Given an array of double values (and the number of values in the
 * array), sum up the values and return the resulting sum as the
 * result.  Mathematically this function implements the summation
 * operation, where we assume we want to sum up all values from index
 * i=0 to i=n-1.
 *
 * @param numValues The number of values in the array to sum up.
 * @param values An array of double values we are to calculate
 *   the sum of and return.  This is a constant parameter because
 *   we do not change the values in any way in this function, only
 *   sum them and return their resulting sum.
 *
 * @returns double Returns the resulting sum of the array values.
 *   This function handles arrays of size 0, where the sum of
 *   such an empty array is assumed to be 0.0.
 */
// implement task 1 function here

/** @brief Calculate mean value of array
 *
 * Calculate the mean (or average) of the given array of values.  This
 * functions works on a list of integers, but since the mean can be a
 * real valued number, it returns a double result.  The values are
 * passed in as an array, along with the number of values in the array
 * as parameters.
 *
 * @param numValues The number of values being input to the
 *   function.
 * @param values An array of doubles, the values to calculate the
 *   mean of.  This is a const parameter because we will not
 *   change the original values in any way, only calculate their
 *   mean.
 *
 * @returns A double result, the calculated mean or average of the
 *   list of values.
 */
// implement task 2 function here

/** @brief Difference of values
 *
 * Given an array of values and a value to subtract (the differand),
 * Subtract the differend from each value in the array.  This funciton
 * is a void function, it does not return an explicit result.  However,
 * The function calculates the difference between each value and stores
 * the result back into the original array to be returned to the caller.
 *
 * @param numValues The number of values being input to the
 *   function.
 * @param values An array of doubles, the values to calculate the
 *   differences of.  The difference is stored back in this array
 *   of values to be returned to the caller.
 * @param differand The value to subtract from each of the values in
 *   the input array.
 */
// implement task 3 function here

/** @brief Square of values
 *
 * Given an array of values, calculate the square of
 * each value, value^2.  Replace the original value in the
 * array with its squared value.  The array is passed by
 * reference, so we return the squared values implicitly back
 * in the original array.
 *
 * @param numValues The number of values being input to the
 *   function.
 * @param values An array of doubles, the values to square and return
 *   to the caller.  The squared value is stored back in this array of
 *   values to be returned to the caller.
 */
// implement task 4 function here

/** @brief standard deviation of values
 *
 * Calculate the standard deviation of the given list of values.
 * This function works on a list of integers, but since the
 * standard deviation can be a real valued number, it returns
 * a double result.  The values are passed in as an array, along
 * with the number of values in the array as parameters.
 *
 * @param numValues The number of values being input to the
 *   function.
 * @param values An array of doubles, the values to calculate the
 *   standard deviation of.
 *
 * @returns A double result, the calculated mean or average of the
 *   list of values.
 */
// implement task 5 function here
