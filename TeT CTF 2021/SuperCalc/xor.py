import random
allowed_chars = "0123456789+-*/()'.~|^&"
needed_chars = [ord(x) for x in ' *abcdefghijklmnopqrstuvwxyz?`']
#print(needed_chars)

for x in allowed_chars:
    for y in allowed_chars:
        for z in allowed_chars:
            oprn = (ord(x)^ord(y)^ord(z))
            if oprn in needed_chars:
                print("'{}'^'{}'^'{}': {}->{}".format(x,y,z,oprn, chr(oprn)))
