/**
 * @file Recursion.c
 * @author Omar Lux, Kassidy Maberry
 * @brief HW5: Recursion
 * @date 2023-11-16
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Declarations of data types
struct binarytree {
    struct binarytree *left;
    struct binarytree *right;
    int value;
} ;

struct ternarytree {
    struct ternarytree *left;
    struct ternarytree *middle;
    struct ternarytree *right;

    int value;
} ;

void testfunction()
{
    printf("Did it work?");
}

//Homework problems

void printfunction()
{
    printf("Test");
}

/**
 * 
 * Problem 1
 * @brief inputs a number n and returns the sum of first n positive integers.
 */
int sum(int n){

    return 0;
}

/**
 * 
 * Problem 2
 * @brief inputs a number n and returns the sum of first n positive odd integers.
 */
int oddsum(int n){
    return 0;
}

/**
 * Problem 3
 * @brief inputs a number n and returns the sum of first n fibbonaci numbers.
 */
int evensum(int n){
    return 0;
}


/**
 * Problem 4
 * @brief inputs an array and returns the sum of elements in the array 
 * (break the array as first element and the rest of the array)
 * 
 * @return int
 * 
 * int 
 */
int arraysum(int *arr){
    return 0;
}


/**
 * Problem 5
 * @brief inputs an array and returns the sum of elements in the array (break the array as two halves)
 * 
 */
int dacarraysum(int *arr){
    return 0;
}


/**
 * Problem 6
 * @brief inputs a sorted array and a number key and does a binary search 
 * returning a Boolean indicating the presence or absence of key in the array
 */
int binarysearch(int *arr){
    return 0;
}

/**
 * Problem 7
 * @brief inputs a binary tree and returns the number of nodes in the tree
 */
int nodecount(struct binarytree *bt){
    return 0;
}

/**
 * Problem 8
 * @brief inputs a binary tree and returns the number of leaf nodes in the tree
 */
int leafnodes(struct binarytree *bt){
    return 0;
}

/**
 * Problem 9
 * @brief inputs a binary tree and returns the depth of the tree
 */
int binarydepth(struct binarytree *bt){
    return 0;
}


/**
 * Problem 10
 * @brief  inputs a binary tree and returns the sum of elements in the array
 */
int binarysum(struct binarytree *bt){
    return 0;
}



/**
 * Problem 11
 * @brief  inputs a TERNARY tree 
 * (makenode takes 4 inputs - node value, left tree, middle tree and right tree)output 
 * the elements in depth first manner (in-order traversal) assuming  the order left<middle<right
 */
int Ternarytraverse(struct ternarytree *tt){
    return 0;
}

// Auxilary functions


int main(){

    return 0;
}