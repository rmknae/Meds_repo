def exponential(z):
    x = abs(z)
    sum_items = 0
    n = 0
    precision = 10**(-10)
    x_by_n = 1
    fac_n = 1
    abs_x_by_n = 1

    while abs_x_by_n > precision:
        sum_items += x_by_n
        n += 1
        fac_n = fac_n * n              
        x_by_n = (x**n) / fac_n        
        abs_x_by_n = abs(x_by_n)       

    if z > 0:
        return sum_items
        
    else:
        return ( 1/ sum_items)    

x = -500
print(exponential(x))