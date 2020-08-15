fibMemo = {}

def fib(n):
    if n == 1 or n == 2:
        return 1
    elif n not in fibMemo:
        fibMemo[n] = fib(n-1) + fib(n-2)
    
    return fibMemo[n]

def fibNoMemo(n):
    if n == 1 or n == 2:
        return 1
    
    return fibNoMemo(n-1) + fibNoMemo(n-2)

print(fibNoMemo(40))
print(fib(40))