package challenges_java.capturing_rainwater;

import java.util.ArrayList;

public class Rainwater {
    
    public int rainCaptured(int[] arr) {
        int total = 0;
        boolean lookingForTop = true;
        if (arr.length > 0) {
            //iterate through once and find high points in list
            ArrayList<Integer> highpoints = new ArrayList<Integer>();
            for (int i = 0; i < arr.length; i++) {
                if (lookingForTop && i != arr.length - 1 && arr[i] >= arr[i+1]) {
                    highpoints.add(i);
                    lookingForTop = false;
                } else if (!lookingForTop && i != arr.length - 1 && arr[i] < arr[i+1]) {
                    lookingForTop = true;
                } else if (lookingForTop && i == arr.length - 1) {
                    highpoints.add(i);
                }
            }

            //iterate through again and calculate water caught using high points list
            int current = 0;
            while (current < highpoints.size() - 1) {
                //left sides trough
                if (arr[highpoints.get(current)] > arr[highpoints.get(current+1)]) {
                    int waterLine = highpoints.get(current);
                    while (arr[waterLine] > arr[highpoints.get(current+1)]) {
                        waterLine++;
                    }
                    for (int i = waterLine; i < highpoints.get(current+1); i++) {
                        total += (arr[highpoints.get(current+1)] - arr[i]);
                    }
                //right sided trough
                } else if (arr[highpoints.get(current)] < arr[highpoints.get(current+1)]) {
                    int i = highpoints.get(current) + 1;
                    while (arr[i] < arr[highpoints.get(current)]) {
                        total += (arr[highpoints.get(current) - arr[i]]);
                        i++;
                    }
                //equal sided trough
                } else if (arr[highpoints.get(current)] == arr[highpoints.get(current+1)]) {
                    int waterLine = arr[highpoints.get(current)];
                    for (int i = highpoints.get(current) + 1; i < highpoints.get(current+1); i++) {
                        total += waterLine - arr[i];
                    }
                }
                current++;
            }

            //System.out.println(highpoints);
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
