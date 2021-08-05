# StorageQueryTest
------
This sample app is used to demonstrate a problem we are encountering where the *StorageFileQueryResult.FindStartIndexAsync* gives error on the file app is activated.

Launch the test app by opening a file so:

* Set the Configuration Properties > Debugging > Launch Application : NO
* Build Debug, x64
* Start Debugging (F5) / Green arrow

The app has file type associations with .jpg, .jpeg, .png

For testing:
* Don't use One Drive folder.
* Create a folder with one empty sub-folder and one .jpg file(or you can unzip the pics.zip)
* Right click on the jpg file in the folder
* Open with > StorageQueryTest

This will launch the app with FileActivatedEventArgs from which we get the storage file and query.
* When it tries to get the index of the activated file it fails.

![image](https://user-images.githubusercontent.com/6416138/128411198-c51cb3c9-5212-487d-b448-9e03caa08dcc.png)

