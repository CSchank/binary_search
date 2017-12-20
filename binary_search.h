/*
 * C library for general binary search. 
 * You must supply a compare() function using void pointers.
 *
 * Author: Christopher W. Schankula
 * Last updated: December 20th, 2017
 * Code is licensed under the CC BY 4.0 license.
 *
 * THE CODE PROVIDED HEREIN IS PROVIDED "AS-IS"
 * THE AUTHOR ASSUMES NO RESPONSBILITY OR WARRANTY
 * FOR USE OF THE CODE PROVIDED HEREIN
 * EXTENSIVE TESTING OF THIS CODE IS REQUIRED
 * TO ENSURE ITS CORRECTNESS AS PART OF THE INTENDED
 * APPLICATION THEREOF
 */

int binary_search(void *A, void *elem, size_t s, int low, int high, int compare(const void *, const void *));