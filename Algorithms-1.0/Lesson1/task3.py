def get_number(s):
    return s[-7:len(s)]
def get_code(s):
    if s[:2] == '+7':
        return s[2:5]
    elif s[0] == '8' and len(s) > 7:
        return s[1:4]
    else:
        return '495'
def is_equal(s1, s2):
    if get_code(s1) == get_code(s2) and get_number(s1) == get_number(s2):
        return True
    return False
new, a, b, c =  input().replace('-', ''), input().replace('-', ''), input().replace('-', ''), input().replace('-', '')
new = new.replace('(', '').replace(')', '')
a = a.replace('(', '').replace(')', '')
b = b.replace('(', '').replace(')', '')
c = c.replace('(', '').replace(')', '')
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

