def get_number(s):
    return s[-7:len(s)]
def get_code(s):
    return ''
def is_equal(s1, s2):
    if get_code(s1) == get_code(s2) and get_number(s1) == get_number(s2):
        return True
    return False
new, a, b, c =  input().replace('-', ''), input().replace('-', ''), input().replace('-', ''), input().replace('-', '')
print(get_code(new), get_number(new))
print(get_code(a), get_number(a))
print(get_code(b), get_number(b))
print(get_code(c), get_number(c))
if is_equal(new, a):
    print("YES")
else:
    print("NO")
if is_equal(new, b):
    print("YES")
else:
    print("NO")
if is_equal(new, c):
    print("YES")
else:
    print("NO")

