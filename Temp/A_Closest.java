// import java.io.*;
// import java.util.*;

// public class A_Closest_Point {
//     public static void main(String[] args) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out), true);
//         int t = Integer.parseInt(br.readLine().trim());
//         for (int i = 0; i < t; i++) {
//             String[] nm = br.readLine().trim().split(" ");
//             int n = Integer.parseInt(nm[0]);
//             int[] arr = new int[n];
//             String[] arrStr = br.readLine().trim().split(" ");
//             for (int j = 0; j < n; j++) {
//                 arr[j] = Integer.parseInt(arrStr[j]);
//             }

//             pw.println(helper(arr,n));
//         }
//         br.close();
//         pw.close();
//     }
//     public static String helper(int[] arr, int n) {
//         Arrays.sort(arr);
//         if(arr[0]+1>=arr[1]) return "NO";
//         int pt=arr[1]-1;
//         for(int i=1;i<n-1;i++){
//             if(Math.abs(pt-arr[i])>Math.min(Math.abs(arr[i]-arr[i-1]),Math.abs(arr[i]-arr[i+1]))) return "NO";
//         }
//         if(Math.abs(arr[n-1]-arr[n-2])<Math.abs(pt-arr[n-1])) return "NO";
//         return "YES";

//     }
// }





import java.io.*;
import java.util.*;

public class ClosestPoint {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out), true);
        
        int t = Integer.parseInt(br.readLine().trim());
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine().trim());
            int[] points = new int[n];
            String[] pointsStr = br.readLine().trim().split(" ");
            
            for (int j = 0; j < n; j++) {
                points[j] = Integer.parseInt(pointsStr[j]);
            }

            pw.println(canInsertClosestPoint(points, n));
        }
        
        br.close();
        pw.close();
    }

    public static String canInsertClosestPoint(int[] points, int n) {
        for (int i = 0; i < n - 1; i++) {
            if (points[i + 1] - points[i] >= 4) {
                return "YES";
            }
        }
        return "NO";
    }
}
