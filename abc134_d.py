if __name__ == "__main__":
    print("Hello, give me two numbers: ")
    a, b = map(int, input().split())
    if a + b % 2 == 0:
        print("Even")
    else:
        print("Odd")