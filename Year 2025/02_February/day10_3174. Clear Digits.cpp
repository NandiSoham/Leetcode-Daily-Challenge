// Problem Link -> https://leetcode.com/problems/clear-digits/

// ======================================= Approach - 1 ====================================

class Solution {
public:
    string clearDigits(string s) {
        int idx = 0;

        while(idx < s.length()){
            if(isdigit(s[idx])){
                s.erase(idx, 1);

                if(idx - 1 >= 0){
                    s.erase(idx - 1, 1);
                    idx--;
                }
            } else idx++;
        }

        return s;
    }
};



// Time Complexity -> O(n^2)
// Space COmplexity -> O(1)

// =========================================================================================


// ======================================= Approach - 2 ====================================

class Solution {
public:
    string clearDigits(string s) {
        stack<char> charStack;
        string ans = "";

        for(char &ch : s){

            if(isdigit(ch)){
                if(!charStack.empty()){
                    charStack.pop();
                }
            } else {
                charStack.push(ch);
            }
        }

        while(!charStack.empty()){
            ans.push_back(charStack.top());
            charStack.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};



// Time Complexity -> O(n)
// Space COmplexity -> O(n)

// =========================================================================================


// ======================================= Approach - 3 ====================================

class Solution {
public:
    string clearDigits(string s) {
        string ans = "";

        for(char &ch : s){

            if(isdigit(ch)){
                if(!ans.empty()){
                    ans.pop_back();
                }
            } else {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};



// Time Complexity -> O(n)
// Space COmplexity -> O(1)

// =========================================================================================
