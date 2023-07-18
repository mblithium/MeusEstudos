<?php
$meuarray = array(
    "nome" => "Matheus",
    "corFavorita" => "Roxo",
    "jogosFavoritos" => array("The Legend Of Zelda - Tears of The Kingdom")
);
$meuarray2 = [
    "nome" => "Matheus",
    "corFavorita" => "Roxo",
    "jogosFavoritos" => ["The Legend of Zelda - Tears of the kingdom"]
];
echo $meuarray['nome'] . "\n";
echo $meuarray2['nome'] . "\n";
?>