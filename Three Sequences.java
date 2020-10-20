/*
Problem link- https://codeforces.com/contest/1406/problem/D
*/

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class D {
    public static void main(String[] args) {
        Scanner input;
        try {
            input = new Scanner(new File("input.txt"));
        } catch (FileNotFoundException e) {
            input = new Scanner(System.in);
        }
        
        int n = input.nextInt();
        long a[] = new long[n+1];
        long diff[] = new long[n+1];
        for (int i = 1; i <= n; i++) {
            a[i] = input.nextInt();
            diff[i] = a[i] - a[i-1];
        }

        // solution
        long incB = 0;
        for (int i = 2; i <= n; i++)
            incB += Math.max(0, diff[i]);
        
        System.out.println((long)Math.ceil(((double)(incB + a[1])/2)));
        int numQ = input.nextInt();
        while (numQ-->0) {
            int l, r;
            long x; 
            l = input.nextInt(); r = input.nextInt(); x = input.nextInt();
            if (l == 1) a[1] += x;
            if (l > 1) {
                incB -= Math.max(0, diff[l]);
                diff[l] += x;
                incB += Math.max(0, diff[l]);
            }
            if (r < n) {
                incB -= Math.max(0, diff[r+1]);
                diff[r+1] -= x;
                incB += Math.max(0, diff[r+1]);
            }
            System.out.println((long)Math.ceil(((double)(incB + a[1])/2)));
        }
    }
}
