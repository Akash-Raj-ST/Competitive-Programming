// 2284. Sender With Largest Word Count
// https://leetcode.com/problems/sender-with-largest-word-count/

class Solution {
    public String largestWordCount(String[] messages, String[] senders) {
        Map<String,Integer> msg = new HashMap<>();
        int count;
        for(int i=0;i<messages.length;i++){
            count = 1;
            for(int j=0;j<messages[i].length();j++){
                if(messages[i].charAt(j)==' ') count++;
            }
            if(msg.containsKey(senders[i])) {
                msg.put(senders[i],count+msg.get(senders[i]));
            }
            else msg.put(senders[i],count);
        }
         
        int max=0;
        String name="";
        for(Map.Entry m : msg.entrySet()){ 
            if((int)m.getValue()>max){
                max = (int) m.getValue();
                name = (String) m.getKey();
            }else if((int)m.getValue()==max){
                if(name.compareTo((String)m.getKey())<0) name= (String)m.getKey();
            }
            System.out.println(m.getKey()+" "+m.getValue());    
         } 
        return name;
    }
}