# REV01 Thu 18 Mar 06:13:06 WIB 2021
# START Thu 18 Mar 06:12:47 WIB 2021

# Read tlpi-dist/README
# Read tlpi-dist/BUILDING

RESULT="WEEK04-TLPI.txt"
TOKEN="OS211W04"
DIR="tlpi-dist/"

# Delete Old File
rm -f $RESULT

# Go Inside
cd $DIR

# clean all
make clean

# compile all
make

# .bash_alises
source ~/.bash_aliases

echo     "==="                                  >  $RESULT
echo     "pwd"                                  >> $RESULT
pwd                                             >> $RESULT
echo     "==="                                  >> $RESULT
echo     "chktoken $TOKEN"                     >> $RESULT
chktoken $TOKEN                                >> $RESULT
echo     "==="                                  >> $RESULT
echo     "date"                                 >> $RESULT
date                                            >> $RESULT
echo     "==="                                  >> $RESULT
echo     "time/calendar_time"                   >> $RESULT
time/calendar_time                              >> $RESULT
echo     "==="                                  >> $RESULT
sleep 1
echo     "ls -alR"                              >> $RESULT
ls -alR                                         >> $RESULT
sync
echo "wc -l $RESULT"                           >> $RESULT
wc -l $RESULT                                  >> $RESULT
echo     "==="                                  >> $RESULT
echo     "make clean"                           >> $RESULT
make     clean
echo     "==="                                  >> $RESULT
echo     "date"                                 >> $RESULT
date                                            >> $RESULT
echo     "==="                                  >> $RESULT
echo     "mv $RESULT ../../"                   >> $RESULT
mv       $RESULT                               ../../
exit
exit

