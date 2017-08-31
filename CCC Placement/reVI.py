from __future__ import division
import re

while 1:
    try:
        st = raw_input()
        V=-1
        I=-1
        R=-1
        
        for x in re.finditer('[R|I|V]=([0-9]*)',st):
            calc = x.group(0).split('=')
            if calc[0] is 'R':
                R = int(calc[1][:])
            elif calc[0] is 'V':
                V = int(calc[1][:])
            elif calc[0] is 'I':
                I = int(calc[1][:])
        
        if V is -1:
            print "V="+"{:.2f}".format(I*R)+"V"
        elif I is -1:
            print "I="+"{:.2f}".format(V/R)+"A"
        elif R is -1:
            print "R="+"{:.2f}".format(V/I)+"O"
        
    except(EOFError):
        break