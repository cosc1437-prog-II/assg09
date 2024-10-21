---
name: 'Task 3: Implement `differenceOfValues()` Function'
about: Task 3 for Students
title: 'Task 3: Implement `differenceOfValues()` Function'
labels: enhancement
assignees: ''

---

**Description**

Implement the `differenceOfValues()` function.  This function does not return any result, instead the results are calculated in place in the passed in array of values.  Thus the array of values cannot be declared as a `const` parameter for this function.

This function needs 3 parameters, the usual 2 indicating the number of values in the array being worked upon, and the array of `double` values itself.  The third parameter is a `double` value which specifies the amount that should be subtracted in place from each value of the input array.

**Suggested Solution**

Make sure that the calculation is done in place in the given array.  The results of your calculation need to be returned implicitly in the given array for the function.

**Additional Requirements**

- The array of values needs to be modified in place in this function.
- The resulting values after this funciton finishes will have the difference of each original value from the given differand value.

