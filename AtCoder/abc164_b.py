T_h, T_s, A_h, A_s = map(int, input().split())

# Turns that each need to win
T_t = (A_h + T_s - 1) // T_s # Y
A_t = (T_h + A_s - 1) // A_s # X

if T_t <= A_t:
    print("Yes")
else:
    print("No")
