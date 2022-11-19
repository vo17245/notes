#include"lib.h"
class Solution {
public:
    bool backtrack(string& s,string& p,int a,int b){
        if(b==p.length()){
            if(s.length()==a){
                return true;
            }else{
                return false;
            }
        }
        if(a==s.length()){
            if(p.length()==b){
                return true;
            }else{
                if(b+1!=p.length()&&p[b+1]=='*'){

                }else{
                    return false;
                }
            }
        }
        if(p[b]<='z'&&p[b]>='a'){
            if(b+1==p.length()){
                if(p[b]==s[a]){
                    a++;
                    b++;
                    return backtrack(s,p,a,b);
                }else{
                    return false;
                }
            }else{
                if(p[b+1]=='*'){
                    char pk=p[b];
                    b+=2;
                    if(backtrack(s,p,a,b)){
                        return true;
                    }
                    while(a!=s.length()&&pk==s[a]){
                        a++;
                        if(backtrack(s,p,a,b)){
                            return true;
                        }
                    }
                    return false;
                }else{
                    if(p[b]==s[a]){
                        a++;
                        b++;
                        return backtrack(s,p,a,b);
                    }else{
                        return false;
                    }
                }
            }
        }else{
            //p[b]=='.'
            if(b+1==p.length()){
                b++;
                a++;
                if(backtrack(s,p,a,b)){
                    return true;
                }
                return false;
            }else{
                if(p[b+1]=='*'){
                    b+=2;
                    if(backtrack(s,p,a,b)){
                        return true;
                    }
                    a++;
                    while(a!=s.length()+1){
                        if(backtrack(s,p,a,b)){
                            return true;
                        }
                        a++;
                    }
                    return false;
                }else{
                    b++;
                    a++;
                    if(backtrack(s,p,a,b)){
                        return true;
                    }
                    return false;
                }
            }
        }
    }
    bool isMatch(string s, string p) {
        return backtrack(s,p,0,0);
    }
};