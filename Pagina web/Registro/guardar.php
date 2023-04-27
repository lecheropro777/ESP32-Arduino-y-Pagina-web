<?php
require '../conexion.php';

$nUsuario = $_POST['nombre'];
$apPaterno = $_POST['apPaterno'];
$apMaterno = $_POST['apMaterno'];
$edad = $_POST['edad'];
$email = $_POST['email'];
$telefono = $_POST['telefono'];
$contrasena = $_POST['contrasena'];


$insertar = "INSERT INTO usuarios VALUES ('','$email','$nUsuario','$apMaterno','$apMaterno','$edad','$telefono','$contrasena')";
$query= mysqli_query($conectar, $insertar);

if($query){
    echo "<script> location.href = '../index.php'; </script>";
}else{
    echo "<script> alert('incorrecto o cuenta ya registrada');
    location.href = 'registro.html';
    </script>";
}

?>