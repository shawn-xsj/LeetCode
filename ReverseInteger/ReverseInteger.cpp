//************************
// My Solution
//************************

class Solution {
public:
    int reverse(int x) {
        vector<int> a;
        int b = x;

        if(b!=0){     
            while(b!=0){
            a.push_back(b%10);
            b = b/10;
            }                   
        }
        else {
            a.push_back(b);
 
        }
        int result=0;
        for(int i=0;i<a.size();++i){
            if(result>-1*pow(2,31)&&result<pow(2,31)-1){
                result = result +a[i]*pow(10,(a.size()-1-i));
            
                }
               else{ 
                   result =0;
               break;}
        }
   
        return result;