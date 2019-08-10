Git is a version control system.
Git is free software
git add xxx.h
git commit -m "wrote a test.h file"
now we need run : git status and git diff
next we will run : git log

git tracks changes of file!
My boss still prefers SVN.

git checkout -b dev  == git branch dev & git checkout dev
git branch

<<<<<<< HEAD
Creating a new branch is quick AND simple.
=======
Creating a new branch is quick AND simple.
>>>>>>> feature1

<<<<<<< HEAD
dev is working!!!!!
=======
dev is working!!!!!
>>>>>>> dev
