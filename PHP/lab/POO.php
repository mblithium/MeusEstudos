<?php
class Carro {

    public string $marca;
    public string $modelo;
    public string $ano;
    public string $cor;
    public string $KM;
    public string $cambio;
    public int $portas;
    public float $motor;



    public function __construct($marca, $modelo, $ano, $cor, $KM, $cambio, $portas, $motor) {
        $this->marca = strtoupper($marca);
        $this->modelo = strtoupper($modelo);
        $this->ano = $ano;
        $this->cor = $cor;
        $this->KM = $KM;
        $this->cambio = $cambio;
        $this->portas = $portas;
        $this->motor = $motor;
    }
}

$unomille = new Carro("fiat", "uno mille", "2008/2009", "branco", 145000, "manual", 2, 1.0);
$volksfox = new Carro("volkswagen", "fox", "2009/2010", "prata", 86129, "manual", 4, 1.0);

printf("Alguns carros registrados: 
$unomille->marca $unomille->modelo $unomille->ano, $unomille->portas portas. 
$volksfox->modelo. 
\n");

?>