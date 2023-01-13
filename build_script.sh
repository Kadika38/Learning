#!/bin/bash
echo "Welcome!"
firstline=$(head -n1 source/changelog.md)
read -a splitfirstline <<< $firstline
version=${splitfirstline[1]}
echo $version
echo "Continue? (1 == yes | 0 == no)"
read versioncontinue
if [ versioncontinue == 1 ]
do
  echo "OK"
  for file in ./source
  do
  echo file
else
  echo "Please come back when you are ready"
fi
