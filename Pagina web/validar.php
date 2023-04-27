<?php
require 'conexion.php';
session_start();

$email = $_POST['email'];
$contrasena = $_POST['contrasena'];






$buscar = "SELECT email, nUsuario, contrasena FROM usuarios where(email=\"$email\") and contrasena= \"$contrasena\"";
$query = $conectar->query($buscar);

			while ($r=$query->fetch_array()){
                $user_id=$r["email"] or $user_id=$r["nUsuario"] ;
				break;

            }
            if($user_id==null){
				print "<script>alert(\"Acceso invalido.\");window.location='index.php';</script>";
			}else{
				print "<script>window.location='Inicio/inicio.php';</script>";				
			}
?>