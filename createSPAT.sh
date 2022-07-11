#!/bin/bash
##
# This script sets the environment for running the v2x_conv.py script.
# Primarily we are concerned with setting the LD_LIBRARY_PATH and PYTHONPATH
# environment variables, since they control finding the appropriate shared
# libraries for running the sample.
##


export PYROOT=v2x_api_76100_lb
export BUILD=debug

export LIBROOT=${PYROOT}/${BUILD}/lib
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${LIBROOT}
export PYTHONPATH=${PYTHONPATH}:${PYROOT}/python/src

PYEXE=$(which python2.7)

if [[ "${PYEXE}x" == "x" ]] ; then
   PYEXE=$(which python)
fi

#echo Encoding message.dat to JSON:
#${PYEXE} script.py -j personalMessages/message.dat

echo Encoding message.hex to JSON:
${PYEXE} script.py -j --hex personalMessages/message.hex

echo Encoding message.json to binary:
#script.py
${PYEXE} script.py -jb personalMessages/message.json


