class Solution {
    public boolean checkValidString(String s) {
        Stack<Integer> brackets = new Stack<>();
        Stack<Integer> stars = new Stack<>();
        
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);

            if(ch == '('){
                brackets.push(i);
            }else if(ch == '*'){
                stars.push(i);
            }else{
                // closing brackets

                if(brackets.size()>0){
                    brackets.pop();
                }else if(stars.size()>0){
                    stars.pop();
                }else{
                    return false;
                }
            }
        }

        while(brackets.size()>0 && stars.size()> 0){
            if(brackets.peek()> stars.peek())
              return false;
              else{
                  brackets.pop();
                  stars.pop();
              }
        }
        return brackets.size() == 0;
    }
}