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

// Declaration of true and false
enum {False = 0, True = 1};

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

int copyarr(int *arr, int *orr, int size, int offset, int i);


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
int binarysearch(int *arr, int key){
    int size = sizeof(arr) / 4;
    printf("%d\n", arr[4]);
    if (size == 1){
        return False;
    }
    int prev = malloc(sizeof(int) * (size - 1)); 
    copyarr(arr, prev, size, 1, 0);
    int preva = binarysearch(prev, key);
    int ans = False;
    if (arr[0] == key){
        ans = True;
    }
    return ans || preva;
}

/**
 * Problem 7
 * @brief inputs a binary tree and returns the number of nodes in the tree
 */
int nodecount(struct binarytree *bt){
    if (bt == NULL){
        return 0;
    }
    struct binarytree *lprev = bt->left;
    struct binarytree *rprev = bt->right;
    int Lans = nodecount(lprev);
    int Rans = nodecount(rprev);
    int ans = 1 + Lans + Rans;
    return ans;
}

/**
 * Problem 8
 * @brief inputs a binary tree and returns the number of leaf nodes in the tree
 */
int leafnodes(struct binarytree *bt){
    if (bt == NULL){
        return 0;
    }
    struct binarytree *lprev = bt->left;
    struct binarytree *rprev = bt->right;
    int Lans = leafnodes(lprev);
    int Rans = leafnodes(rprev);
    int ans = Lans + Rans;
    if (bt->left == NULL && bt->right == NULL){
        ans = ans + 1;
    }
    return ans;
}

/**
 * Problem 9
 * @brief inputs a binary tree and returns the depth of the tree
 */
int binarydepth(struct binarytree *bt){
    if (bt == NULL){
        return 0;
    }
    struct binarytree *lprev = bt->left;
    struct binarytree *rprev = bt->right;
    int Lans = binarydepth(lprev);
    int Rans = binarydepth(rprev);
    int ans = 1;
    if (Lans > Rans){
        ans = ans + Lans;
    } else {
        ans = ans + Rans;
    }
    return ans;
}


/**
 * Problem 10
 * @brief  inputs a binary tree and returns the sum of elements in the array
 */
int binarysum(struct binarytree *bt){
    if (bt == NULL){
        return 0;
    }
    struct binarytree *lprev = bt->left;
    struct binarytree *rprev = bt->right;
    int Lans = binarysum(lprev);
    int Rans = binarysum(rprev);
    int ans = bt->value;
    ans = ans + Lans + Rans;
    return ans;
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
struct binarytree *createbt(int value, struct binarytree *l, struct binarytree *r){
    struct binarytree *bt = malloc(sizeof(struct binarytree));
    bt->left = l;
    bt->right = r;
    bt->value = value;
    return bt;
}

struct ternarytree *creatett(int value, struct ternarytree *l, struct ternarytree *m, struct ternarytree *r){
    struct ternarytree *bt = malloc(sizeof(struct ternarytree));
    bt->left = l;
    bt->middle = m;
    bt->right = r;
    bt->value = value;
    return bt;
}

/**
 * @brief Copies part of an array to another.
 * 
 * @param arr 
 * @param size 
 * @param offset 
 */
int copyarr(int *arr, int *orr, int size, int offset, int i){
    printf("\t%d\n", i);
    if (i + offset == size){
        return 0;
    }
    orr[i] = arr[i + offset];
    copyarr(arr, orr, size, offset, i + 1);
}

/**
 * @brief Generates the binary tree
 *          4
 *         / 
 *        3  
 *       / \
 *      1   2 
 * @return struct binarytree* 
 */
struct binarytree *genbt(){
    struct binarytree *l = createbt(1, NULL, NULL);
    struct binarytree *r = createbt(3, NULL, NULL);
    struct binarytree *m = createbt(2, l, r);

    l = m;
    r = NULL;
    m = createbt(4, l, r);
    return m;
}

/**
 * @brief Creates the following ternary tree
 * 
 *              7
 *             /|\
 *            5 4 6
 *             /|\ \
 *            1 2 3 9
 * 
 * @return struct ternarytree* 
 */
struct ternarytree *gentt(){
    struct ternarytree *l = creatett(1, NULL, NULL, NULL);
    struct ternarytree *r = creatett(3, NULL, NULL, NULL);
    struct ternarytree *m = creatett(2, NULL, NULL, NULL);
    struct ternarytree *h = creatett(4, l, m, r);
    m = h;
    l = creatett(5, NULL, NULL, NULL);
    r = creatett(6, NULL, NULL, creatett(9, NULL, NULL, NULL));
    h = creatett(7, l, m, r);
    return m;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    struct binarytree *bt = genbt();
    printf("%d\n", binarysum(bt));
    printf("%d\n", nodecount(bt));
    printf("%d\n", leafnodes(bt));
    printf("%d\n", binarydepth(bt));
    // printf("Did it work? %d\n", binarysearch(arr, 3)); Currently binary search doesn't work
    return 0;
}