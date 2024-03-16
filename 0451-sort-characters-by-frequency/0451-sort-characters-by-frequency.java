class Solution {
    public String frequencySort(String s) {
        String str="";
        Map<Character,Integer> mp=new HashMap<>();
        for(int i=0;i<s.length();i++){
            mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
        }
        PriorityQueue<Character> pq=new PriorityQueue<>((a,b)->mp.get(b)-mp.get(a));
        for(char key : mp.keySet()){
            pq.add(key);
        }
        while(!pq.isEmpty()){
            char ch=pq.poll();
            int k=mp.get(ch);
            while(k-- > 0){
                str+=ch;
            }
        }
        return str;
    }
}