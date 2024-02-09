class Solution {
    public int[] findPSE(int[] arr) {
        int n = arr.length;
        int[] pse = new int[n];
        Stack<Integer> st = new Stack<>();
        pse[0] = -1;
        st.push(0);

        for (int i = 1; i < n; i++) {
            while (!st.isEmpty() && arr[i] < arr[st.peek()]) {
                st.pop();
            }
            pse[i] = st.isEmpty() ? -1 : st.peek();
            st.push(i);
        }
        return pse;
    }

    public int[] findNSE(int[] arr) {
        int n = arr.length;
        int[] nse = new int[n];
        Stack<Integer> st = new Stack<>();
        nse[n - 1] = n;
        st.push(n-1);

        for (int i = n - 2; i >= 0; i--) {
            while (!st.isEmpty() && arr[i] <= arr[st.peek()]) {
                st.pop();
            }
            nse[i] = st.isEmpty() ? n : st.peek();
            st.push(i);
        }
        return nse;
    }

    public int sumSubarrayMins(int[] arr) {
        int sum = 0;
        int[] pse = findPSE(arr);
        int[] nse = findNSE(arr);

        for (int i = 0; i < arr.length; i++) {
            long leftCount = i - pse[i];
            long rightCount = nse[i] - i;
            sum += ((leftCount * rightCount)  * arr[i]) % 1000000007;
            sum %= 1000000007;
        }
        return (int) sum;
    }
}