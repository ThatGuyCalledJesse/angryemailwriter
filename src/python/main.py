import random
import win32com.client as comclt
import time
import os

times_list = []
it = 0.1
for i in range(5):
    times_list.append(it)
    it += 0.1

# Install pywin32 in case it's not installed yet
os.system("pip install pywin32")

# The main part of the program
while True:
    wsh= comclt.Dispatch("WScript.Shell")
    wsh.SendKeys("{CAPSLOCK}") 
    time.sleep(random.choice(times_list))