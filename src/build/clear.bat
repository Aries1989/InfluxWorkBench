cd ..
del *.user
del *.vcxproj
del *.suo
del *.filters
del *.sdf
del *.sln

rmdir /s/q debug
rmdir /s/q release
rmdir /s/q GeneratedFiles

pause