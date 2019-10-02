<?php

// Complete the birthdayCakeCandles function below.
function birthdayCakeCandles($arr) {
    $max = 1;
    $max_count = 0;

    for($i=0;$i<count($arr);$i++){
        if($max < $arr[$i]){
            $max = $arr[$i];
        }
    }

    for($i=0;$i<count($arr);$i++){
        if($max == $arr[$i]){
            $max_count++;
        }
    }

    return $max_count;

}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$stdin = fopen("php://stdin", "r");

fscanf($stdin, "%d\n", $ar_count);

fscanf($stdin, "%[^\n]", $ar_temp);

$ar = array_map('intval', preg_split('/ /', $ar_temp, -1, PREG_SPLIT_NO_EMPTY));

$result = birthdayCakeCandles($ar);

fwrite($fptr, $result . "\n");

fclose($stdin);
fclose($fptr);
