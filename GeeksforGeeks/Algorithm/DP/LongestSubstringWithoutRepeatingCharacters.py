'''
Given a string S, find the length of its longest substring that does not have any repeating characters.

Example 1:

Input:
S = geeksforgeeks
Output: 7
Explanation: The longest substring
without repeated characters is "ksforge".
Example 2:

Input:
S = abbcdb
Output: 3
Explanation: The longest substring is
"bcd". Here "abcd" is not a substring
of the given string.
'''


def SubsequenceLength(s):
    v={}
    l=0
    maxlen=0
    for i in range(len(s)):
        if s[i] in v and l<=v[s[i]]:
            l=v[s[i]]+1
        else:
            maxlen=max(maxlen,i-l+1)
        v[s[i]]=i
    return maxlen
    
