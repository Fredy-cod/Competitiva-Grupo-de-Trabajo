expr = input()
exec(f'''
def getv():
	return {expr}
''')
val = getv()
print(val)
