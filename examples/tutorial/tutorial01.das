[export]
def test
    print("this is basic tutorial with error checking and file access\n")

def fib(n)
    if (n < 2)
        return n
    else
        return fib(n-1)+fib(n-2)

[export]
def main
    test()
    print("{fib(40)}\n")
