# Reboot-Van-PKMN-Edition
Réboot Van PKMN édition is a tool to edit the .json obtained using flatc on SwSh's .gfbpmcatalog in an easy way.  It's even available for Linux!

I called it Réboot Van PKMN édition to name it after the reboot vans in Fortnite because they bring back dead teammates and this brings back removed Pokémon.  The accents are there to look like the é in Pokémon.  

This is my first useful program, so please enjoy!  

I'm too lazy to make a Windows build, so you need Cygwin to run it on Windows.  

This was tested on Ubuntu 19.10.  

The .zip even contains flatc for Linux!  

If you're using a .gfpak from lgpe, it'll still ask for a path to a camp .gfbanmcfg even though lgpe doesn't have those but you can just type in whatever.  The program won't enter it into the file if dealing with an lgpe .gfpak.  

# Building
g++ /path/to/RebootVanPKMNEdition.cpp -o RebootVanPKMMEdition

# Use
make sure this program and the poke_resource_table.json are both in the same folder and cd into the folder.  Create a folder named out.  

drag the executable onto a window of your terminal and press enter.  

follow the instructions.  

copy the poke_resource_table.json located in out (The one the program generated) to the folder where the original was replacing the original.  

I forgot to mention that adding formes is currently unsupported but support is planned.  
