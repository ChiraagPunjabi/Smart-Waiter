import pandas as pd
import serial

import time

coordinate=pd.read_csv('coordinate.csv')
x=list(coordinate.loc[:,'x'])
y=list(coordinate.loc[:,'y'])
print(x)
print(y)


serialcomm = serial.Serial('COM5', 9600)

serialcomm.timeout = 1



x1 = str(x[0]).strip()
y1 = str(y[0]).strip()
sig=x1+" "+y1


serialcomm.write(sig.encode())
time.sleep(0.5)

    #print(serialcomm.readline().decode('ascii'))

serialcomm.close()

