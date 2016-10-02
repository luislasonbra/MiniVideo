mini_analyser
=============

Introduction
------------

mini_analyser is a software designed to help you extract the maximum of informations and meta-datas from multimedia files, using the minivideo library.

### Supported video codec (decoding)
- H.264 / MPEG-4 part 10 "Advance Video Coding"
  - please note that at still a few bugs inside CABAC decoding process being worked on...

### Supported container formats (import modules)
- AVI [.avi]
- WAVE [.wav]
- MPEG-PS (MPEG "Program Stream") [.mpg, .mpeg, .vob, ...]
- MP4 / MOV (ISOM container) [.mp4, .mov, .3gp, ...]
- MP3 "elementary stream" (.mp3)
- H.264 "elementary stream" ("Annex B" format) [.264]
- MPEG-1/2 "elementary stream" [.mpg, .mpeg]


Building mini_analyser
----------------------

Do not forget "FindLibMiniVideo.cmake" directory in the cmake/modules/, which defines
how to find the library (libminivideoframework.so file) and its header (minivideoframework.h file)
In case of problem, it may be necessary to manually indicate the paths of these files.

minivideo library must have been built first.

> $ cd mini_analyser/  
> $ qmake  
> $ make  

Installation into the system, available for root user with both testing softwares:
>  $ su  
>  # make install # INSTALLATION INTO THE SYSTEM, ROOT USER ONLY  


Using mini_analyser
-------------------

> $ cd mini_analyser/build/  
> $ export LD_LIBRARY_PATH=../../minivideo/build
> $ ./mini_analyser

Then drag and drop files to analyse them!