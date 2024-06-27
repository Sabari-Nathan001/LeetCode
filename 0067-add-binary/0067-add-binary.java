class Solution {
    public String addBinary(String a, String b) {
        // char carry='0';
        // StringBuilder sb = new StringBuilder();
        // char a1[] = a.toCharArray();
        // char b1[] = b.toCharArray();
        // int i=a1.length-1,j=b1.length-1;
        // while(i>=0 || j>=0){
        //     char tempA = i>=0 ? a1[i] : '0';
        //     char tempB = j>=0 ? b1[j] : '0';
        //     if(tempA==tempB){
        //         if(carry=='0'){
        //             sb.append("0");
        //         }
        //         else{
        //             sb.append("1");
        //         }
        //         carry=tempA;
        //     }
        //     else if(tempA!=tempB){
        //         if(carry=='0'){
        //             sb.append("1");
        //         }
        //         else{
        //             sb.append("0");
        //             carry='1';
        //         }
        //     }
        //     i--;j--;
        // }
        // if(carry=='1'){
        //     sb.append("1");
        // }
        // sb.reverse();
        // return sb.toString();
        char carry='0';
        StringBuilder sb=new StringBuilder();
        char a1[]=a.toCharArray();
        char b1[]=b.toCharArray();
        int i=a1.length-1,j=b1.length-1;
        while(i>=0 || j>=0 || carry=='1'){
            char tempA = i >= 0 ? a1[i] :'0';
            char tempB = j >= 0 ? b1[j] : '0';

            int sum = (tempA - '0') + (tempB - '0') + (carry - '0');
            sb.append((char) (sum % 2 + '0'));
            carry = (char) (sum / 2 + '0');

            i--;
            j--;
        }

        return sb.reverse().toString();
    }
}
 