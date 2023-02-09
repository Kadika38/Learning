package challenges_java.capturing_rainwater;

import java.util.ArrayList;

public class Rainwater {
    
    public int rainCaptured(int[] arr) {
        int total = 0;
        if (arr.length > 0) {
            ArrayList<Integer> highpoints = new ArrayList<Integer>();
            int firstBiggest = arr[0];
            int firstBiggestIndex = 0;
            boolean fbFound = false;
            for (int i = 1; i < arr.length; i++) {
                if (arr[i] > firstBiggest && !fbFound) {
                    firstBiggest = arr[i];
                    firstBiggestIndex = i;
                    if (arr[i+1] < arr[i]) {
                        fbFound = true;
                    }
                }
                if (fbFound && highpoints.size() == 0) {
                    highpoints.add(firstBiggestIndex);
                } else if (fbFound && highpoints.size() > 0) {
                    if () {

                    }
                }
            }
        }

        return total;
    }

    public static void main(String[] args) {
        //test arrays
        int[] t1 = new int[]{4, 2, 1, 3, 0, 1, 2};

        //function call
        Rainwater rw = new Rainwater();
        System.out.println(rw.rainCaptured(t1));
    }

}
