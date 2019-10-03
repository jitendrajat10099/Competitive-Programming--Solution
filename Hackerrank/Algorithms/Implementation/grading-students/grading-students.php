<?php
/*
   Link - https://www.hackerrank.com/challenges/grading/problem
*/
/*
 * Complete the gradingStudents function below.
 */
function gradingStudents($arr) {
   foreach ($arr as &$item) {
        if($item >= 38){
            if(($item%5) >= 3){
                $item += (5-($item%5));
            }
        }
    }

    return $arr;

}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$__fp = fopen("php://stdin", "r");

fscanf($__fp, "%d\n", $n);

$grades = array();

for ($grades_itr = 0; $grades_itr < $n; $grades_itr++) {
    fscanf($__fp, "%d\n", $grades_item);
    $grades[] = $grades_item;
}

$result = gradingStudents($grades);

fwrite($fptr, implode("\n", $result) . "\n");

fclose($__fp);
fclose($fptr);
