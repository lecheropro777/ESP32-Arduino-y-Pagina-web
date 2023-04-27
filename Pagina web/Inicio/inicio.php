<?php
require '../conexion.php';
session_start();
$email=$_SESSION['email']
$contrasena=$_SESSION['contrasena']
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inicio</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
<header>
    <h2 class="PDHS">PDHS</h2>
    <nav >
       
    </nav>
</header>
    <section id="banner">
        <div class="contenido-banner">
        <form action="datosUsuario.php" method="post">
            <p>Nombre:</p>
            <div class="nUsuario">
                <p><?php SELECT nUsuario FROM usuarios where id=1?></p>
            </div>
            <input type="text" name="inputNombreUsuario">

            <p>Apellido paterno:</p>
            <div class="apPaterno">
            <p><?php SELECT apPaterno FROM usuarios where id=1?></p>
            </div>
            <input type="text" name="inputApPaterno">

            <p>Apellido materno:</p>
            <div class="apMaterno">
            <p><?php SELECT apMaterno FROM usuarios where id=1?></p>
            </div>
            <input type="text" name="inputApMaterno">

            <p>Edad:</p>
            <div class="edad">
            <p><?php SELECT edad FROM usuarios where id=1?></p>
            </div>
            <input type="number" name="inputEdad">

            <p>Telefono de contacto:</p>
            <div class="telefono">
            <p><?php SELECT telefono FROM usuarios where id=1?></p>
            </div>
            <input type="number" name="inputTelefono">
        </form>
        </div>
        <div>
            <form action="subirImagen.php" method="post">
                <img  class="imagen" src="ghost-rider-motorista-fantasma-2509029.webp">
                <br>
                <input class="seleccionarImagen" type="file"  name="imagenUsuario" />
                <br>
                <br>
                <input class="subirImagen" type="submit" name="subir" value="UPLOAD"/>
            </form>
        </div>
    </section>
    
</body>
</html>