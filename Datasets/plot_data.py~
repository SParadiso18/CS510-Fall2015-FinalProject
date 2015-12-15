import numpy as np
import pandas as pd
import matplotlib as mpl
import matplotlib.pyplot as pyplot
import sys
from matplotlib import cm

# Display error if ther is an improper number of inputs
if len(sys.argv) != 2:
        print "ERROR!!"
        print "ERROR!! Command Line Input Error!!"
        print "ERROR!!"
        sys.exit()

# Storing argv[1] as variable csv_file
csv_file = sys.argv[1]

csv_check = open(csv_file, 'rb')

# Try-Except block to check whether the file is truly csv
try:
    a = csv.Sniffer().sniff(csv_check.read(1024))
    csv_check.seek(0)
except csv.Error:

# Outputs the file
print csv_file

# Gets and outputs the image
name = csv_file[csv_file.rfind('/') + 1: -3] + "jpg"
print name

# Working with and manipulating the graph
df = pd.read_csv(csv_file, sep = ' ', names = list('xyz'))

data = df.pivot('y', 'x', 'z')

pyplot.xlabel('X')
pyplot.ylabel('Y')

xv = = data.columns.values
yv = data.index.values

xt = [xv[0], xv[-1]]
yt = [yv[0], yv[-1]]

pyplot.xticks([0, len(xv) - 1], xt)
pyplot.yticks([0, len(yv) - 1], yt)
pyplot.imshow(np.log(data.values))
pyplot.gca().invert_yaxis()
pyplot.savefig(name, dpi=500)
