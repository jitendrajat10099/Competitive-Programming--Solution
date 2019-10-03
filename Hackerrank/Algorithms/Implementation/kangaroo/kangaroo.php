<?php
/*
   Link - https://www.hackerrank.com/challenges/kangaroo/problem
*/
// Complete the kangaroo function below.
function kangaroo($x1, $v1, $x2, $v2) {

if(($v2-$v1) == 0){
    return "NO";
}
   if(($x1-$x2)%($v2 - $v1) == 0 and ($x1-$x2)/($v2 - $v1)>0){
        return "YES";
    }else{
        return "NO";
    }
}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%[^\n]", $x1V1X2V2_temp);
$x1V1X2V2 = explode(' ', $x1V1X2V2_temp);

$x1 = intval($x1V1X2V2[0]);

$v1 = intval($x1V1X2V2[1]);

$x2 = intval($x1V1X2V2[2]);

$v2 = intval($x1V1X2V2[3]);

$result = kangaroo($x1, $v1, $x2, $v2);

fwrite($fptr, $result . "\n");

fclose($stdin);
fclose($fptr);
