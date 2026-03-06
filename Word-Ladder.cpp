1class Solution {
2public:
3    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
4        
5    queue<pair<string, int>> q;
6    q.push({beginWord, 1});
7
8    unordered_set<string> st(wordList.begin(), wordList.end());
9    st.erase({beginWord});
10
11    while(!q.empty()){
12        string word = q.front().first;
13        int steps = q.front().second;
14        q.pop();
15        if(word == endWord) return steps;
16
17    for(int i =0; i<word.size(); i++){
18        char original = word[i];
19        for(char ch ='a'; ch<='z'; ch++){
20            word[i]=ch;
21
22            if(st.find(word) != st.end()){
23                st.erase(word);
24                q.push({word, steps + 1});
25            }
26        }
27        word[i] = original;
28    }  
29    }
30    return 0;    
31    }
32};
33//TC: 0(n*l) number of word in wordlist and length of the word
34//SC: 0(n) length of each word