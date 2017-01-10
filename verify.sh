#!/bin/bash
function verify_factorial {
  input=${1}
  expected_output=${2}
  output=`echo ${input} | ./factor | grep factorial\( | awk {'print $3'}`
  if [ "${expected_output}" -ne "${output}" ]
  then
    exit 1
  fi
}

verify_factorial 5 120
verify_factorial 0 1
verify_factorial 8 40320
