<?php
// includes
require_once 'Page.php';

// Create Display Page
$displayPage = new Page("main.html");

// Create other pages
$homePage 		= 	new Page("main.html","Home");
$aboutPage 		= 	new Page("about.html","About Me");
$projectsPage 	= 	new Page("projects.html","My Projects");
$notesPage 		= 	new Page("notes.html","My Notes");
$contactPage 	= 	new Page("contact.html","Contact Me");
$linksPage 		= 	new Page("links.html","My Links");
$cppPage 		= 	new Page("cppessentials.html","C++ Essentials Workshop");


// gets and sets page
$page=$_GET["page"];
switch($page){
	case "about":
		$displayPage = &$aboutPage; 
		break;
	case "projects":
		$displayPage = &$projectsPage; 
		break;
	case "notes":
		$displayPage = &$notesPage; 
		break;
	case "contact":
		$displayPage = &$contactPage; 
		break;
	case "links":
		$displayPage = &$linksPage; 
		break;
	case "cppessentials":
		$displayPage = &$cppPage; 
		break;
	default:
		$displayPage = &$homePage; 
		break; 
}
// print page
$displayPage->show();
?>