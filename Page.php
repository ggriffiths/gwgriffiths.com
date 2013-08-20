<?php
class Page
{
	// define properties
	public $path;
	public $title;
	
	//ctor
	public function __construct($new_path,$new_title)
	{
		$this->path = $new_path;
		$this->title = $new_title;
	}
	
	//prints the page
	public function show()
	{
		include("header.html");
		include($this->path);
		echo "<h6><center>Copyright &copy; 2013 Grant Griffiths</center></h6><br><br>";
	}
}
?>