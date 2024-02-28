class Solution {
    public double trimMean(int[] arr) {
        double n=arr.length*0.05;
        Arrays.sort(arr);
        double sum=0,j=0;
        for(int i=(int)n;i<arr.length-n;i++){
            sum+=arr[i];
            j++;
        }
        double mean=sum/j;
        return mean;
    }
}