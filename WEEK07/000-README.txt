# REV00 Fri 16 Apr 17:51:05 WIB 2021
# START Fri 16 Apr 17:51:05 WIB 2021

RESULT="WEEK07-REPORT0.txt"
REPORT1="WEEK07-REPORT1.txt"
SHAREM="WEEK07-MYSYNC.bin"

DIR="SYNC/"

# Delete Old File
rm -f $RESULT

# Go Inside
cd $DIR

echo "clean all"
make clean

echo -n "ZCZC R01 pwd "          >   $RESULT
pwd                              >>  $RESULT

echo -n "ZCZC R02 date "         >>  $RESULT
date                             >>  $RESULT

echo -n "compile and run it... "
make test                        >>  $RESULT
echo "DONE!"

echo    "ZCZC R03 ls -al"        >>  $RESULT
ls -al                           >>  $RESULT

echo -n "ZCZC R04 pwd "          >>  $RESULT
pwd                              >>  $RESULT

echo -n "ZCZC R05 date "         >>  $RESULT
date                             >>  $RESULT

echo    "mv $REPORT1 ../../"    >> $RESULT
mv      $REPORT1                ../../
echo    "mv $SHAREM ../../"     >> $RESULT
mv      $SHAREM                 ../../
echo    "mv $RESULT ../../"     >> $RESULT
mv      $RESULT                 ../../

echo "clean all"
make clean

exit
exit

