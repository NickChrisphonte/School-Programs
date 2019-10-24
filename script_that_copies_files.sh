#!/bin/bash

echo "yo it's your boy, what it do my dood"

firstline=$(head -n 1 source/changelog.md)
read -a splitfirstline <<< $firstline
version=${splitfirstline[1]}
echo "you're building lego sets with this build" $version

echo "do u wanna kep goin?(1 = ya| 0 = not ya)"
read versioncontinue

if [ $versioncontinue -eq 1 ]
	then
		for filename in source/*
  	do
    	if [ "$filename" == "source/secretinfo.md" ]
      	then
        	echo $filename
        	echo "no copy $filename"
      	else
        	echo $filename
        	cp $filename build/.
      fi
      cd build/
      echo "version" $version
      ls -l
      # hastag comment
      cd ..
    done
  else
  	echo "Plz never come back"
fi
