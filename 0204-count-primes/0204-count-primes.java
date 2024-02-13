class Solution {
    public int countPrimes(int n) {
        boolean [] isPrime = new boolean[n+1];
        for(int i=0;i<n;i++){
            isPrime[i]=true;
        }
        for(int i=2;i<Math.sqrt(n);i++){
            if(isPrime[i]==true){
                for(int j=2;j*i<n;j++){
                    isPrime[i*j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(isPrime[i]==true){
                count++;
            }
        }
        return count;
    }
}