class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String[] str1=s1.split("\\s+");
        String[] str2=s2.split("\\s+");
        List<String> li=new ArrayList<>();
        Map<String,Integer> mp=new HashMap<>();
        for(String word : str1){
            mp.put(word,mp.getOrDefault(word,0)+1);
        }
        for(String word : str2){
            mp.put(word,mp.getOrDefault(word,0)+1);
        }
        for(Map.Entry<String,Integer> entry:mp.entrySet()){
            if(entry.getValue()==1){
                li.add(entry.getKey());
            }
        }
        return li.toArray(new String[li.size()]);
    }
}