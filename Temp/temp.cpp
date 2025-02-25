class Solution {
public:
    string compressedString(string word) {
        string output="";
        char ichar='\0';
        int count=0;
        for(int i=0;i<word.size();i++){
            if(ichar=='\0' || (ichar==word[i] && count<9)){
                ichar=word[i];
                count++;
            }else{
                output=output+to_string(count)+ichar;
                ichar=word[i];
                count=1;
            }
        }
        if(count>0){
            output=output+to_string(count)+ichar;
        }
        return output;
    }
};