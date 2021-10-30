package com.company;

public class arr_pr_21 {
    static class pair {// initializing
        int min;
        int max;
    }

    static pair getmin_max(int[] array, int n) {
        pair min_max = new pair();

        if (n == 1) {
            min_max.max = array[0];
            min_max.min = array[0];
            return min_max; //return type

        }
        if (array[0] > array[1]) {
            min_max.max = array[0];
            min_max.min = array[1];
        } else {
            min_max.max = array[1];
            min_max.min = array[0];
        }
        for (int i = 2; i < n; i++) { // loop
            if(array[i]> min_max.max){
                array[i] = min_max.max;
            }
            else if(array[i]< min_max.min){
                array[i] = min_max.min;

            }

    }
        return min_max;

}

    public static void main(String[] args) {
    int[] arr = {2,4,6,78,9,5}; // initializing
    int n = arr.length; //length
        System.out.println("max and min : " + getmin_max(arr, n));
    }
}

