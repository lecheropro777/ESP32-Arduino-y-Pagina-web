-- --------------------------------------------------------
-- Host:                         192.168.0.9
-- Versión del servidor:         11.0.1-MariaDB - mariadb.org binary distribution
-- SO del servidor:              Win64
-- HeidiSQL Versión:             12.3.0.6589
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Volcando estructura de base de datos para prueba
CREATE DATABASE IF NOT EXISTS `prueba` /*!40100 DEFAULT CHARACTER SET utf16 COLLATE utf16_bin */;
USE `prueba`;

-- Volcando estructura para tabla prueba.botones
CREATE TABLE IF NOT EXISTS `botones` (
  `btnColor` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf16 COLLATE=utf16_bin;

-- Volcando datos para la tabla prueba.botones: ~9 rows (aproximadamente)
INSERT INTO `botones` (`btnColor`) VALUES
	('Amarillo'),
	('Amarillo'),
	('Amarillo'),
	('Rojo'),
	('Rojo'),
	('Azul'),
	('Azul'),
	('Azul'),
	('Verde');

-- Volcando estructura para tabla prueba.usuarios
CREATE TABLE IF NOT EXISTS `usuarios` (
  `email` varchar(45) NOT NULL,
  `nUsuario` varchar(45) NOT NULL,
  `apPaterno` varchar(45) NOT NULL,
  `apMaterno` varchar(45) NOT NULL,
  `edad` int(3) NOT NULL,
  `telefono` varchar(50) NOT NULL DEFAULT '',
  `contrasena` varchar(45) NOT NULL,
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3 COLLATE=utf8mb3_bin;

-- Volcando datos para la tabla prueba.usuarios: ~1 rows (aproximadamente)
INSERT INTO `usuarios` (`email`, `nUsuario`, `apPaterno`, `apMaterno`, `edad`, `telefono`, `contrasena`) VALUES
	('juan.martinez3168@gmail.com', 'Juan Antonio', 'Hernandez', 'Martinez', 19, '6271437428', 'uwu');

/*!40103 SET TIME_ZONE=IFNULL(@OLD_TIME_ZONE, 'system') */;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
