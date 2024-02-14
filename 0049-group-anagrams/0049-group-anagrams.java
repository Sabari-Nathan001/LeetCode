class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> res=new ArrayList<>();
        HashMap<String,List<String >> map=new HashMap<>();
        for(String current:strs)
        {
            char[] s=current.toCharArray();
            Arrays.sort(s);
            String sorted=new String(s);
            if(!map.containsKey(sorted))
            {
                map.put(sorted,new ArrayList<>());
            }
           map.get(sorted).add(current);    
        }
        res.addAll(map.values());
        return res;
    }
}