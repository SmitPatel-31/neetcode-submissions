class Solution {
public:
    bool isValid(string s) {
        stack<char> a;

        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                a.push(s[i]);
                cout<<s[i]<<endl;
                continue;
            }
           
            if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
                if(a.empty()){
                    return false;
                }
            char temp = a.top();
            cout<<temp<<endl;
            a.pop();
            if(s[i] == '}' && temp == '{'){
                continue;
            }else if(s[i] == ']' && temp == '['){
                continue;
            }else if(s[i] == ')' && temp == '('){
                continue;
            }
            else{
                return false;
            }

            } 
            
            
        }
        if(a.empty()){
            return true;
        }
        return false;
    }
};
