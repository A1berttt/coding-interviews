public class Solution {
    public String replaceSpace(StringBuffer str) {
    	int cnt = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ')
                cnt++;
        }
        int newLen = str.length() + cnt * 2;
        int newIdx = newLen - 1;
        int oldIdx = str.length() - 1;
        str.setLength(newLen);
        for(; oldIdx >=0 && newIdx >= 0; oldIdx--) {
            if(str.charAt(oldIdx) == ' ') {
                str.setCharAt(newIdx--, '0');
                str.setCharAt(newIdx--, '2');
                str.setCharAt(newIdx--, '%');
            }
            else
                str.setCharAt(newIdx--, str.charAt(oldIdx));
        }
        return str.toString();
    }
}
