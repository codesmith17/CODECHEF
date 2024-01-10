for _ in range(int(input())):
    
    n = int(input())
    
    a = input()
    
    # print(a)
    
    pcount = 0
    
    for j in a:
        
        if(j == "R"):
            pcount+=1
            
    if(pcount > n//2):
        
        print("P"*n)
    else:
        
        ans = []
        
        for j in range(n-1,-1,-1):
            
            
            if(pcount <= n//2):
            
                if(a[j] == "P"):
                    ans.append("S")
                    pcount+=1
                elif(a[j] == "S"):
                    ans.append("R")
                    pcount+=1
                else:
                    ans.append("P")
                    
            else:
                
                ans.append("P")
                
                
        for j in range(len(ans)-1,-1,-1):
            
            print(ans[j],end="")
            
        print()