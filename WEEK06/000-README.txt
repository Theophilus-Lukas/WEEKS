# REV01 Mon  5 Apr 17:39:10 WIB 2021
# START Mon  5 Apr 17:39:10 WIB 2021

RESULT="WEEK06-FORK.txt"
DIR="FORK/"

# Delete Old File
rm -f $RESULT

# Go Inside
cd $DIR

echo "clean all"
make clean

echo "pwd"                       >   $RESULT
pwd                              >>  $RESULT

echo "date"                      >>  $RESULT
date                             >>  $RESULT

echo -n "compile and run it... "
make test                        >>  $RESULT
echo "DONE!"

echo "ls -al"                    >>  $RESULT
ls -al                           >>  $RESULT

echo "pwd"                       >>  $RESULT
pwd                              >>  $RESULT

echo "date"                      >>  $RESULT
date                             >>  $RESULT

echo "clean all"
make clean

echo     "mv $RESULT ../../"     >> $RESULT
mv       $RESULT              ../../
echo     "READ $RESULT"

exit
exit

