from pwn import *

io =remote('34.76.206.46',10007)

def pretty_print(arr):
	new_arr = arr.replace('|','').replace('-','').replace('T','0').replace('H','1').replace('  ',',').strip().replace(' ','').split('\n')
	arr = [x.split(',') for x in new_arr if len(x)>1]
	return arr 
def add_first(arr):
	s0 = (0)
	s1 = (0)
	s2 = (0)
	for x in range(8):
		for y in range(8):
			if y == 1 or y==3 or y==5 or y==7:
				s0 += (int(arr[x][y]))
			if y==2 or y==3 or y==6 or y==7:
				s1 += int(arr[x][y])
			if y==4 or y==5 or y==6 or y==7:
				s2+= int(arr[x][y])
	return [bin(s2),bin(s1),bin(s0)]

def add_second(arr):
	s3 = (0)
	s4 = (0)
	s5 = (0)
	for x in range(8):
		for y in range(8):
			if x == 1 or x==3 or x==5 or x==7:
				s3 += (int(arr[x][y]))
			if x==2 or x==3 or x==6 or x==7:
				s4 += int(arr[x][y])
			if x==6 or x==4 or x==5 or x==7:
				s5+= int(arr[x][y])
	return [bin(s5),bin(s4),bin(s3)]
x = 0
while True:
	if(x<100):
		data = io.recvuntil(b'key:')
	else:
		print(io.recvline())
		print(io.recvline())
		print(io.recvline())
		print(io.recvline())
		print(io.recvline())
		print(io.recvline())
		break
	print(data)
	arr = data.split(b'BOARD NUMBER - '+str(x).encode('utf-8'))[1].decode('utf-8')
	print(arr)
	full_arr = add_second(pretty_print(arr))+add_first(pretty_print(arr))
	final = [x[-1] for x in full_arr]
	binary = str('0b'+(''.join(final)))
	io.sendline(str(int(binary,2)).encode('utf-8'))
	x = x+1


