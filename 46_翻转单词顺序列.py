class Solution:
    def ReverseSentence(self, s):
        # write code here
        if s.strip()=="":
            return s
        s_list = s.split(' ')
        s_list = s_list[::-1]
        # print(s_list)
        res = " ".join(s_list)
        return res
