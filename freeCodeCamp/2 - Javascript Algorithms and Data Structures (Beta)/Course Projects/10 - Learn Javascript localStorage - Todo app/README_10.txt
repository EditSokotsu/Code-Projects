				Todo List project
localStorage: 
This javascript feature was the main focus of the section. localStorage is used in cases where data must persist without the need to make server requests (server requests are "expensive" | time, etc). In the real world, localStorage can be used in the implementation of the shopping cart feature that is ubiquitous among online stores; other use cases include storing user preferences, application settings, cache data and other cases like form data and progress tracking. The feature has has certain methods that allow a programmer to access and/or manipulate the data held there; namely: setItem(), getItem(), removeItem(), clear(). 
	setItem() adds data to localStorage. The method takes a minimum of 2 arguments: 1) a key - a variable name of sorts by which said data is labeled. This key is input as a string 2) the data that the programmer wants to store. Anything other than a string is not so readily readable, it may be useful to use the JSON.stringify() -> this method accepts the data as its argument. 
	an example of using the setItem() method: localStorage.setItem("data", JSON.stringify(myTaskArr)). 
	getItem() retrieves data from localStorage. the method accepts 1 argument: the key of the data you want to retrieve. If you have used JSON.stringify() on your data, may be useful to return it back to it's original state by using JSON.parse() on the data.
	an example: const getTaskArr = JSON.parse(localStorage.getItem("data"))
	removeItem() deletes specified data from localStorage. the method accepts 1 argument: the key of the data you want to remove.
	clear() deletes ALL data from localStorage.
	
	
