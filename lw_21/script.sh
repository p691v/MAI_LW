#!/bin/bash
n=0
dir="-"
if [ -n "$1" ]
then
  if [ "$1" = "?" ]
  then
    echo "This Bash script counts executable files in a directory hierarchy

    Usage:
    ./script.sh [path to directory]

    Parameters:
    There is only one parameter for the path to a directory.
    If path is not specified, the current working directory is used.
    [?] can be used instead of a path to show info.
    "
  else
    dir=($1)
  fi
else
  echo "Directory was not specified so the current working directory is used"
  dir=$(pwd)
fi

if [ "$dir" != "-" ]
then
  for i in $(find "$dir" -type f -executable)
  do
    n=$(("$n" + 1))
  done
  echo "There are $n executable files in this directory"
fi