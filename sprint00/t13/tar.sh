if [ $1 = -c ]
then
	shift
	tar -cf $@
elif [ $1 = -e ]
then
	shift
	tar -xf $1
fi
