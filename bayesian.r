add <- function(x, y) {
    x + y
}

multiply <- function(x, y) {
    x * y
}

factorial <- function(x) {
    if (x == 0) {
       return (1)
    }
    else {
       return(x * factorial(x-1))
    }
    end
}

fibonacci <- function(x) {
    if (x<=1) {
       return (1)
    }
    else if (x>1) {
       return(fibonacci(x-1) + fibonacci(x-2))
    }
    end
}

print(add(1, 2))
print(add(1, -2))
print(multiply(2, 3))
print(multiply(2, 3/4))
print("Factorial start")
print(factorial(3))
print(factorial(1))
print("Factorial end")
print("Fibonacci start")
print(fibonacci(5))
print(fibonacci(1))
print('Fibonacci end')