'''
Assignment 31

Q3) Write a program that scans a specified directory every minute.

The task should display:

1. Directory name
2. Number of files
3. Number of subdirectories
4. Date and time of scanning

Use the os module.
'''

import schedule
import time
import os
from datetime import datetime

def SacnDirectory(Directory):

    Files = 0
    Directories = 0

    Data = os.listdir(Directory)

    for item in Data:

        Path = os.path.join(Directory, item)

        if os.path,isfile(Path)