#scans specified paths to scan for all .xml files that contain sms in their name.
#not smart or efficient method for searchind for matching files. but sufficient.

find  "$1" -iname "*sms*.xml" -type f -exec cp -v {} . \;
find  "$2" -iname "*sms*.xml" -type f -exec cp -v {} . \;
find  "$3" -iname "*sms*.xml" -type f -exec cp -v {} . \;

