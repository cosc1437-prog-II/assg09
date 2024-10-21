---
name: 'Task 5: Implement `calculateStandardDeviation()` Function'
about: Task 5 for Students
title: 'Task 5: Implement `calculateStandardDeviation()` Function'
labels: enhancement
assignees: ''

---

**Description**

Implement the `calculateStandardDeviation()` function.  This function will reuse all of the previously implemented functions to perform its calculation.  This function has a similar signature to the `calculateMean()` function.  It takes an array of double values and the array size as input parameters.  And it should calculate the standard deviation and return this as a double result.  However, because you need to reuse the square and difference function, you can not make the array be a `const` parameter in this function as it was for `calculateMean().`

**Suggested Solution**

You will not need to write any loops.  You will need to reuse most all of the previous function in this function.  You will need to reuse and call `calculateMean()` two times in this function implementation.  The general steps to implement the standard devition should be:

1. Calculate the mean of the initial values in the array by reusing
   your `calculateMean()` function.
2. Calculate the difference of each value in the array of values from the
   mean value by calling your `differenceOfValues()` function.
3. Calculate the square of each of the differences with your
   `squareOfValues()` function.
4. Calculate the mean of the squared differences using the `calculateMean()`
   again.  Notice you are (re)using this function 2 times in the implementation
   of your standard deviation calculation.
5. The final result then is the square root of the mean of these squared differences.
   So you are require to use the `sqrt()` function from `cmath` to get the square root
   of this result.  This should be the final standard deviation that your function
   will return.


**Additional Requirements**

- You must reuse your previous functions either directly or indirectly when implementing this function.


