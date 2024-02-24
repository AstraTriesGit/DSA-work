//
// Created by Nero Sparda on 23/12/23.
//

#ifndef DSA_ARRAYQUESTIONS_H
#define DSA_ARRAYQUESTIONS_H

/**
 * Given an input array, returns the array with even numbers removed.
 * @param Arr The input array, dynamically allocated.
 * @param size The number of elements in the array.
 * @return The mutated input array with no even numbers.
 */
int* removeEven(int* &Arr, int size);

/**
 *
 * @param arr1 The first sorted array.
 * @param arr2 The second sorted array.
 * @param arr1Size Size of the first sorted array.
 * @param arr2Size Size of the second sorted array.
 * @return The merged and sorted array.
 */
int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size);

/**
 * Returns an array of 2 numbers which add up to value.
 * The first pair will be returned, otherwise the array will be returned.
 * @param arr Input array.
 * @param value Target sum.
 * @param size Size of the input array.
 * @return Array of 2 elements or the array itself, read the description.
 */
int *findSum(int arr[], int value, int size);

/**
 * Returns an array of 2 numbers which add up to value.
 * The first pair will be returned, otherwise the array will be returned. <br>
 * This implementation finds the pair in O(nlogn) because
 * it sorts the array before finding the possible pair.
 * @param arr Input array.
 * @param value Target sum.
 * @param size Size of the input array.
 * @return Array of 2 elements or the array itself, read the description.
 */
int *findSumQsort(int arr[], int value, int size);

/**
 * Return an array such that each index has a product of all the numbers
 * present in the array except the number stored at that index.
 * @param arr Input array.
 * @param size Size of input array.
 * @return That weird thing.
 */
int * findProduct(int arr[], int size);

#endif //DSA_ARRAYQUESTIONS_H
