<?php

$n = 7; // Anzahl der Elemente
$m = 3; // jexes x. element

$x = $m; // jedes x
$z = 1;

$arr = array(1, 2, 3, 4, 5, 6, 7);


//count($arr) != 1
while (count($arr) != 1) {
    $i = 0;
    $j = $i + 1;
    $l = count($arr);
    $k = 0; // Anzahl der gekickten Elemente

    echo "<p><span style='color: green;'> (z) Durchlauf Nummer: " . $z . "</span><br />";
    echo "(l) Anzahl der Elemente: " . $l . "<br /></p>";
//echo "<pre>" , var_dump($arr), "</pre><br /><br />";

    while ($i < $l) {

//echo "i: " . $i . " | j: " . $j . " | x: " . $x . "<br />";
// Kick
        if ($j % $x == 0) {
            echo "<span style='color: red;'>" . $arr[$i] . " --> Ausgeschieden<br /></span>";
            unset($arr[$i]);
            $k++;
            $x = $m;
            $j = 0;
        } else {
            echo $arr[$i] . "<br />";
        }

        if ($i == $l - 1) {
            $arr = array_values($arr);
            $l = count($arr);
            $r = $l % $m; // Rest nach Durchlauf

            echo "<p><span style='color: blue;'>Letztes Element in diesem Durchlauf.</span></p>";
//echo "rebuild arr: <br /><pre>" , var_dump($arr), "</pre>";

            echo "(r) Rest: " . $r . "<br />";
            if ($r != 0) {
                $x = $m - $r;
                echo "(x) x. Wert: " . $x . "<br />";
            }
            echo "<hr>";
        }

        $i++;
        $j++;
    }
    $z++;
}

