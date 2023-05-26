class Solution {
    public int lengthOfLastWord(String s) {
        boolean space = false;
        
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(Character.isLetter(s.charAt(i))){
                if(space == true){
                    count = 0;
                    space = false;
                }
                count++;
            }
            else{
                space = true;
            }
        }
        return count;
    }
}