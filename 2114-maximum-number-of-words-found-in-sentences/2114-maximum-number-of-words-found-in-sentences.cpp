class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum = 0;
        for(int i=0;i<sentences.size();i++){
            int words = 1;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' '){
                    words++;
                }
                
            }
            maximum = max(maximum,words);
            
        }
        return maximum;
        
    }
};