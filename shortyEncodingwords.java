class Solution {
    public int minimumLengthEncoding(String[] words) {
       
        Set<String> encoded = new HashSet(Arrays.asList(words));
        for(String oneword:words){
            for(int i=1; i<oneword.length(); ++i)
                encoded.remove(oneword.substring(i));
            } 
            // doing the iteration from 1 coz we dont want to remove whole word we are just checking for prefixes/substrings from behind
        int len=0;
        for(String each:encoded)
            len+=each.length()+1;
        return len;
        
        
        /*
        Arrays.sort(words,(a,b)->b.length()-a.length());//lambda expression to sort biggest length wali string first.
        StringBuilder encoded = new StringBuilder();
        
        for(String s:words)
            if(encoded.indexOf(s+"#")==-1)
                encoded.append(s+"#");
            
        return encoded.length();
        */
    }
}
