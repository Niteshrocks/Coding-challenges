/*
Given two strings s and t, determine if they are isomorphic.

Two strings are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"
Output: true

Example 2:

Input: s = "foo", t = "bar"
Output: false

Example 3:

Input: s = "paper", t = "title"
Output: true

Note:
You may assume both s and t have the same length.
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char sm[128]={0};
        char tm[128]={0};
        for(int i=0;i<s.length();i++){
           if(sm[s[i]]!=tm[t[i]]){
               return false;
           }else if(!sm[s[i]]){
               sm[s[i]] = i+1;
               tm[t[i]] = i+1;
           }
        }
        return true;
        
    }
};
