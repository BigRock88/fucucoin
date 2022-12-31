
Debian
====================
This directory contains files used to package fucucoind/fucucoin-qt
for Debian-based Linux systems. If you compile fucucoind/fucucoin-qt yourself, there are some useful files here.

## fucucoin: URI support ##


fucucoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fucucoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fucucoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/fucucoin128.png` to `/usr/share/pixmaps`

fucucoin-qt.protocol (KDE)

