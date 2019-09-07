#!/bin/bash
cnt=0
while true
do
	let cnt=$cnt+1
	./gin > a.in
	./gout < a.in > a.ans
	./a < a.in > a.out
	if cmp a.out a.ans
	then
		echo "Test$cnt OK"
	else
		echo "Test$cnt Fail"
		diff a.out a.ans
		echo "q to quit, others to continue"
		read input
		if [ $input = q ]
		then
			exit 0
		fi
	fi
done
