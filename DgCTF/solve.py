import base64
import random

sample_string= 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789'
sample_list = list(sample_string)

for i in range(1000):
    random.shuffle(sample_list)
    random_string = ''.join(sample_list)[0:10]
    print('{0} \t {1}'.format(random_string,base64.b64decode(random_string+'==')))

    if b"'" in base64.b64decode(random_string+'=='):
        print('found')
        break
