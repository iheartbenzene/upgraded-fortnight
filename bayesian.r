add <- function(x, y) {
    x + y
}

multiply <- function(x, y) {
    x * y
}

factorial <- function(x) {
    if (x <= 1) {
       print(1)
    }
    else {
       x * factorial(x-1)
    }
}

print(add(1, 2))
print(add(1, -2))
print(multiply(2, 3))
print(multiply(2, 3/4))
print(factorial(3))