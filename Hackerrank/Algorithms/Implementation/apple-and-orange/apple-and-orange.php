<?php

/*
   Link - https://www.hackerrank.com/challenges/apple-and-orange/problem
*/
// Complete the countApplesAndOranges function below.
function countApplesAndOranges($s, $t, $a, $b, $apples, $oranges) {

$apple_catch = 0;
$orange_catch = 0;

foreach($apples as $apple){
    if ($apple >= 0) {
        if ($apple+$a >=$s && $apple+$a <=$t) {
            $apple_catch++;
        }
    }
}

foreach($oranges as $orange){
    if($orange <= 0){
        if($b+$orange <=$t && $b+$orange >=$s ){
            $orange_catch++;
        }
    }

}

echo $apple_catch . "\n";
echo $orange_catch . "\n";

}

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%[^\n]", $st_temp);
$st = explode(' ', $st_temp);

$s = intval($st[0]);

$t = intval($st[1]);

fscanf($stdin, "%[^\n]", $ab_temp);
$ab = explode(' ', $ab_temp);

$a = intval($ab[0]);

$b = intval($ab[1]);

fscanf($stdin, "%[^\n]", $mn_temp);
$mn = explode(' ', $mn_temp);

$m = intval($mn[0]);

$n = intval($mn[1]);

fscanf($stdin, "%[^\n]", $apples_temp);

$apples = array_map('intval', preg_split('/ /', $apples_temp, -1, PREG_SPLIT_NO_EMPTY));

fscanf($stdin, "%[^\n]", $oranges_temp);

$oranges = array_map('intval', preg_split('/ /', $oranges_temp, -1, PREG_SPLIT_NO_EMPTY));

countApplesAndOranges($s, $t, $a, $b, $apples, $oranges);

fclose($stdin);
