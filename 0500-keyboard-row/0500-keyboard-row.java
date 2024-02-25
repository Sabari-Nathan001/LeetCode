class Solution {
    public String[] findWords(String[] words){
        String[] rows={"qwertyuiop","asdfghjkl","zxcvbnm"};
        List<String> result=new ArrayList<>();
        for(String word : words){
            if (belongsToSingleRow(word.toLowerCase(),rows)){
                result.add(word);
            }
        }
        return result.toArray(new String[result.size()]);
    }
    private boolean belongsToSingleRow(String word, String[] rows){
        boolean[] foundInRow = new boolean[3];
        for(char c : word.toCharArray()){
            for (int i = 0; i < 3; i++) {
                if (rows[i].indexOf(c) != -1) {
                    foundInRow[i] = true;
                    if (foundInRow[0] && foundInRow[1] || foundInRow[0] && foundInRow[2] || foundInRow[1] && foundInRow[2]){
                    return false;
                }
            }
        }
    }
    
        return true;
    }
}
