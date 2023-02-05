import java.util.Arrays;

public class BubbleSort {

    public static int[] bubbleSort(int input[]) {
        boolean swapping = true;
        while (swapping) {
        swapping = false;
        for (int i = 0; i < input.length - 1; i++) {
            if (input[i] > input[i + 1]) {
            swap(input, i, i + 1);
            swapping = true;
            }
        }
        }
        return input;
    }

    public static void swap(int[] arr, int indexOne, int indexTwo) {
        int temp = arr[indexTwo];
        arr[indexTwo] = arr[indexOne];
        arr[indexOne] = temp;
    }

    public static void main(String[] args) {
        
    }
}