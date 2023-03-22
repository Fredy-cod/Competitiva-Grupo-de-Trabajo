def evaluate(expr):
    exec(f'''
    def getv():
        return {expr}
    ''')
    return getv()