# REV01 Sat 27 Mar 00:07:15 WIB 2021
# START Fri 26 Mar 23:46:34 WIB 2021

RESULT="WEEK05-DEMO05.txt"
TOKEN="OS211W05"
DIR="DEMO05/"

echo  "STOP-SET-TOP-FIRST"
echo  "See https://osp4diss.vlsm.org/osp-101.html"
sleep 3

# Delete Old File
rm -f $RESULT

# Go Inside
cd $DIR

echo "clean all"
make clean

echo "compile all"
make

echo "pwd"                     >  $RESULT
pwd                            >>  $RESULT

echo "date"                    >>  $RESULT
date                           >>  $RESULT

echo "12-memory"               >>  $RESULT
./12-memory                    >>  $RESULT
echo "=======================" >>  $RESULT

echo "ls -al"                  >>  $RESULT
ls -al                         >>  $RESULT

echo "pwd"                     >>  $RESULT
pwd                            >>  $RESULT

echo "date"                    >>  $RESULT
date                           >>  $RESULT

echo "clean all"
make clean

echo     "mv $RESULT ../../"  >> $RESULT
mv       $RESULT              ../../
echo     "READ $RESULT"

exit
exit

