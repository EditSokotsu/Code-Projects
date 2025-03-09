FOCUS: nested objects, object destructuring, and default parameters

OBJECT.FREEZE()
	- makes an object immutable, ie. no changes can be made to is once method is used
	syntax: Object.freeze(obj) | obj = the object you want to freeze
		eg. Object.freeze(myFavoriteFootballTeam)
		
OBJECT DESTRUCTURING
	- another way to access object properties and/or array elements
	- syntax: const {prop1, prop2,..., propN} = objectName
		* using this syntax, a property's key can used as variables, variables (with the same names as the keys) are created and initialised with those keys' values.
		eg. const { sport, team, year,...} = myFavoriteFootballTeam | sport, team and year are keys of the myFavoriteFootballTeam object
	
DEFAULT PARAMETERS
	- parameters that a function will use if none are passed to it when the function is called
		eg. const greeting = (name = "Anonymous") => {
					  return "Hello " + name;
					} 

					console.log(greeting("John")); // Hello John
					console.log(greeting()); // Hello Anonymous
	

