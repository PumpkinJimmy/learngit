#!/bin/bash
string="abcd"
string2="This is a sample string"
echo "The length of $string is ${#string}"
echo "Part of the $string is ${string:1:2}"
echo "The string2 is \"$string2\""
echo "The index of m is `expr index "$string2" m`"
