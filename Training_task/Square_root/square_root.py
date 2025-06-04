def sqrt(n):
    if n < 0:
        return None  

    low = 0
    high = max(1.0, n)
    mid = 0
    precision = 1e-6

    while (high - low) > precision:
        mid = (low + high) / 2
        if mid * mid > n:
            high = mid
        else:
            low = mid

    return (low + high) / 2

print(sqrt(8)) 