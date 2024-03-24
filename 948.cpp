class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
     sort(tokens.begin() , tokens.end()) ;
     int max = 0 ; 
     int start = 0; 
     int end = tokens.size()-1 ; 
     int score = 0 ; 

     while(start<=end)
    {
         if(power>=tokens[start]) { 
         power -= tokens[start] ; 
         score = score+1 ;
         start++ ; 
         }
     
     else if (max > 0 ){
         power = power + tokens[end] ; 
         end-- ; 
         score = score - 1 ; 
     }
    else{
      break ; 
    }
    max = std::max(max , score) ;
    }
    return max ; 
    }   
};