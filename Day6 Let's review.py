#source - https://www.hackerrank.com/challenges/30-review-loop/problem

for i in range(int(input())):
    s=input(); 
    print(*["".join(s[::2]),"".join(s[1::2])])
