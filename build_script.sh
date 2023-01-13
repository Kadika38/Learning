#!/bin/bash
echo "Welcome!"
firstline=$(head -n1 source/changelog.md)
read -a splitfirstline <<< $firstline
version=${splitfirstline[1]}
echo $version
echo "Continue? (1 == yes | 0 == no)"
read versioncontinue
if [ versioncontinue == 1 ]
sourcefiles=./source/*
then
  echo "OK"
  for file in $sourcefiles
  do
    echo $file
    if [ "$file" == "./source/secretinfo.md" ]
    then
      echo "The above file will not be copied into the Build"
    else
      echo "The above file is being copied into the Build"
      cp $file ./build
    fi
  done
  echo "Using version $version, the following files have been copied into the Build"
  cd build
  builddir=./*
  for file in $builddir
  do
    echo $file
  done
  cd ..
else
  echo "Please come back when you are ready"
fi
