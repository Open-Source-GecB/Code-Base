package com.company;

import java.util.Arrays;

public class arr_pr_24 {
    public static void reverseArray(int [] array, int n){
        int temp = 0;
        for(int i = 0; i < n/2; i++){
           /* temp =array[i] ;
            array[i] = array[n-1-i];
            array[n-1-i] = temp;*/
           array[i] = temp;
           temp = array[n-1-i];
            array[n-1-i] = temp; //sorting
        }
        System.out.println("reversed array is: "+ Arrays.toString(array)); //changing into array

    }
    public static void main(String[] args) {
        int[] arr = {2,3,5,7,9,2}; //initialing
        int n = arr.length;
        reverseArray(arr, n);
    }
}
