<?php
require '../conexion.php';


$email = $_POST['email'];
$contrasena = $_POST['contrasena'];
$codigo = $_POST['codigo'];



$buscar = "SELECT idUsuario, email, contrasena FROM registro where(email=\"$email\") and contrasena= \"$contrasena\"";
$query = $conectar->query($buscar);
	while ($r=$query->fetch_array()){
    $user_id=$r["email"];
				break;

            }
            if($user_id==null){
				print "<script>alert(\"Acceso invalido.\");window.location='sesion.php';</script>";
			}if($codigo!="patasUwU"){
				print "<script>alert(\"Acceso invalido.\");window.location='sesion.php';</script>";
			}else{
				session_start();
				$_SESSION['email']=$user_id;
				print "<script>window.location='albumAdmin/album.php';</script>";			
			}

			



?>