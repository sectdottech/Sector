#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/Sector.png
ICON_DST=../../src/qt/res/icons/Sector.ico
convert ${ICON_SRC} -resize 16x16 Sector-16.png
convert ${ICON_SRC} -resize 32x32 Sector-32.png
convert ${ICON_SRC} -resize 48x48 Sector-48.png
convert Sector-48.png Sector-32.png Sector-16.png ${ICON_DST}

