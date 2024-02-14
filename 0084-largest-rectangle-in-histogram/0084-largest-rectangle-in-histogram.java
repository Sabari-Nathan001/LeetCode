class Solution {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        Stack<Integer> st = new Stack<>();

        int[] left = new int[n];
        left[0] = -1;
        st.push(0);

        for (int i = 1; i < n; i++) {
            while (st.size() != 0 && heights[st.peek()] >= heights[i]) {
                st.pop();
            }
            if (st.size() == 0) {
                left[i] = -1;
            } else {
                left[i] = st.peek();
            }
            st.push(i);
        }

        int[] right = new int[n];
        right[n - 1] = n;
        st.clear();
        st.push(n - 1);

        for (int i = n - 2; i >= 0; i--) {
            while (st.size() != 0 && heights[st.peek()] >= heights[i]) {
                st.pop();
            }
            if (st.size() == 0) {
                right[i] = n;
            } else {
                right[i] = st.peek();
            }
            st.push(i);
        }
        int max = 0;

        for (int i = 0; i < n; i++) {
            int height = heights[i];
            int width = right[i] - left[i] - 1;
            int area = height * width;

            max = Math.max(max, area);
        }

        return max;
    }
}