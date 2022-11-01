# use python

#############
# LIBRARIES #
#############

import csv # Exporting and importing cracked aps
import os # File management
import time 
import random
import errno # Error numbers

from sys import argv # Command-lin arguments
from sys import stdout # Flushing

from shutill import copy # Copying .cap files

# Executing, communicating with, killing processes,
from subprocess import Popen, call, PIPE
from signal import SIGINT, SIGTERM

import re # RegEx, Converting SSID to filename
import argparse # arg parsing
import urllib #check for new versions from the repo
import abc # abstract base class librarise for attack templates


