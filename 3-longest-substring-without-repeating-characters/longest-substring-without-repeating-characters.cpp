class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.find_first_not_of(' ') != string::npos){
           
            int visit[150];
            memset(visit,0,sizeof(visit));
            
            int mx=0,x=0;
            for(int i=0;i<s.size();i++){
                if(visit[s[i]]==0){
                    visit[s[i]]++;
                    x++;
                }else{
                    mx = max(mx,x);
                    
                    if(x>0) i-=x;
                    x=0;
                    memset(visit,0,sizeof(visit));
                }
            }
            mx = max(x,mx);
            return mx;
        }else{
           
            if(s.size()>0) return 1;
            else return 0;
        }
        
    }
};