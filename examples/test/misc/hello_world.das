//	NOTE - this is WIP example of every single feature new syntax has to offer
//	new syntax no longer supports significant whitespace, oxoford commas, etc

//  NOTE - in every case where type is specified for let or var, it is optional, and can be inferred
//	its there for the documentation purposes


/////////////////////
// module declaration

// note - this works, but commented out for now, becasue of WARNING: program is setup as both module, and endpoint
// module hello_world;	// module name

////////////////////
// alias declaration

typedef IntArray = array<int>;	// alias for array of integers

/////////////////////
// struct declaration

struct Foo {
    a : int = 5;
	b : int;
}

struct Bar : Foo {	// structure with inheritance
	c : float;
}

[safe_when_uninitialized]	// structure annotation
struct Baz : Bar {			// structure with methods
	def Baz {
		c = 3.14;
	}
	def add ( value:int ) {
		a += value;
	}
}

class Cls {			// class with methods
	@big			// with metadata
	@min=13
	@max=42
	private foobar : int;
	static foobars : float;
	def public foo {
		debug("foo");
	}
	def private private_method ( m : int ) {	// todo: make it `private def static_method`
		debug(m);
	}
	def static static_method {
		debug("static_method");
	}
	def abstract abstract_method ( a : int ) : float;
	[unsafe_deref]								// note function annotation
	def base_method {
	}

}

class private DerivedClass : Cls {	// class with inheritance
	def override base_method {
		debug("bar");
	}
	def override abstract_method ( a : int ) : float {
		return float(a);
	}
}

///////////////////
// enum declaration

enum EmptyEnum {
}

enum MyEnum {
	ONE,
	TWO,
	THREE
}

enum EnumWithTrailingComma {
	ONE,
	TWO,
}

enum Enum8u : uint8 {
	ONE,
	TWO,
	THREE = 16u8	// TODO: 16i8 causes 2x smart_ptr_leak, note - it causes 1x smart_ptr_leak with old parser
}

enum private Enum64 : uint64 {	// 64 bit enum, private
	ONE,
	TWO,
	THREE = 16ul
}

// TODO: add example of enum with annotation. for now we don't have a builtin enum one

[export]
def enum_use_example {
	let bf : MyEnum = MyEnum.ONE;
}

///////////
// bitfield


bitfield EmptyBitfield {
}

bitfield MyBitfield {
	ONE,
	TWO,
	THREE,
}

bitfield BitfieldWithTrailingComma {
	ONE,
	TWO,
}

[export]
def bitfield_use_example {
	let bf : MyBitfield = MyBitfield.ONE;
}

////////////////////
// making structures

struct Mks {
	a : int = 1;
	b : float = 2.0;
	def Mks ( t : int ) {
		a = t;
		b = float(t);
	}
	def Mks ( one,two,three:int ) {
		a = one + two;
		b = float(two + three);
	}
}

[export]
def test_make_struct {
	let a : Mks = Mks();	// with default values
	let A : Mks = default<Mks>;	// with default values, same as Mks()
	let b : Mks = Mks(a=2,b=3.0);	// with values overwritten
	let c : Mks = Mks(a=4);		// with some values overwritten
	let C : Mks = Mks(5);			// with constructor
	let CC : Mks = Mks(1,2,3);	// with complex constructor
	let d : Mks = struct<Mks>(a=2,b=3.0);	// with values overwritten
	let e : Mks[3] = struct<Mks>(a=1,b=1.0;a=2,b=2.0;a=3,b=3.0);	// this is array of structures // TODO: do we need better syntax_error
	unsafe {
		let h : Mks = default<Mks> uninitialized;	// uninitialized, a=0, b=0.0
		let i : Mks = struct<Mks>(uninitialized a=1);	// uninitialized, a=1, b=0.0
	}
}

[export]
def test_new_struct {
	let a : Mks* = new Mks();	    		// Mks*, on heap - default values
	let A : Mks* = new default<Mks>;		// Mks*, on heap - default values
	let b : Mks* = new Mks(5);	    		// Mks*, on heap - with constructor
	let c : Mks* = new<Mks>(a=1,b=2.0);	// Mks*, on heap - with values overwritten
	let d : Mks*[10] = new<Mks[10]>();			// fixed_array of 10 elements
	unsafe {
		let j : Mks* = new<Mks>(uninitialized b=2.0);	// Mks* - on heap, uninitialized, a=0, b=2.0
		let h : Mks* = new default<Mks> uninitialized;	// Mks* - on heap, uninitialized, a=0, b=0.0
	};
}

/////////
// tuples

tuple Tup {
	a : int;
	b : float;
	c : string;
}

[export]
def test_tuples {
	let a : tuple<int;float;string> = (1,2.,"3");
	let b : tuple<int;float;string> = tuple(1,2.,"3");
	let c : tuple<int;float;string> = tuple<Tup>(a=1,b=2.,c="3");
	let e : tuple<int;float;string> = tuple<Tup>(uninitialized a=1);	// a=1,b=0.0,c=""
	let f : tuple<int;float;string>* = new tuple(1,2.,"3");	// on heap
}

///////////
// variants

variant Varr {
	a : int;
	b : float;
	c : string;
}

[export]
def test_variants {
	// NOTE - variant can't be uninitialized (it just makes no sense)
	let a : variant<a:int;b:float;c:string> = Varr(a=1);
	let b : variant<a:int;b:float;c:string> = variant<Varr>(a=1);
}

/////////
// arrays

[export]
def test_arrays {
	let a : array<int> <- [1,2,3,4,5];	// array of integers
	let c : array<int> <- array(1,2,3,4,5);	// array of integers
	let d : array<int> <- array<int>(1,2,3,4,5);	// array of integers
	let b : int[5] = fixed_array(1,2,3,4,5);	// fixed size array of integers
	let e : int[5] = fixed_array<int>(1,2,3,4,5);	// fixed size array of integers
	let g : array<Mks> <- [ Mks(1), Mks(2,3,4) ];	// array of structures
	let f : Mks[2] <- struct<Mks>(a=1,b=2.0; a=3,b=4.0);
	let G : array<Mks> <- array struct<Mks>(a=1,b=2.0; a=3,b=4.0);	// array of structures
	let h : Tup[2] <- tuple<Tup>(a=1,b=2.,c="3"; a=4,b=5.,c="6");
	let H : array<Tup> <- array tuple<Tup>(a=1,b=2.,c="3"; a=4,b=5.,c="6");	// array of tuples
	let v : Varr[6] <- variant<Varr>(a=1; b=2.; c="3"; a=4; b=5.; c="6");
	let V : array<Varr> <- array variant<Varr>(a=1; b=2.; c="3"; a=4; b=5.; c="6");	// array of variants
}

////////
// table

def test_tables() {
	let a : table<int> <- { 1, 2, 3, 4, 5 };	// table of integers, keys only
	let b : table<int> <- table<int>(1,2,3,4,5);	// table of integers, keys only
	let B : table<int> <- table(1,2,3,4,5);	// table of integers, keys only
	let c : table<int;int> <- { 1=>1, 2=>2, 3=>3, 4=>4, 5=>5 };	// table of integers, key-value pairs
	let d : table<int;int> <- table<int;int>(1=>1,2=>2,3=>3,4=>4,5=>5);	// table of integers, key-value pairs
	let D : table<int;int> <- table(1=>1,2=>2,3=>3,4=>4,5=>5);	// table of integers, key-value pairs
}

/////////////////
// comprehensions

[export]
def test_comprehensions {
	let arr_comp : array<int> <- [for x in range(1,100); x*x; where x%2==0];	// array comprehension
	let iter_comp : iterator<int> <- [iterator for x in range(1,100); x*x; where x%2==0];	// iterator comprehension
	let set_comp : table<int> <- {for x in range(1,100); x*x; where x%2==0};	// set comprehension
	let table_comp : table<int;string> <- {for x in range(1,10); x=>"{x*x}"; where x%2==0};	// table comprehension
}

////////////////////
// return expression

[export]
def test_regular_return ( a,b : int ) : int {
	return a + b;
}

[export]
def test_return_with_move_syntax ( var a : array<int> ) {
	return <- a;
}

[export]
def test_return_lambda ( a : int ) : lambda<(arg:int):void> {
	return <- @ ( b : int ) {
		debug(a+b);
	};
}

[export]
def test_cond_return ( cond : bool ) {
	return 13 if (cond);
	return 42;
}

///////////////
// if-then-else

[export]
def test_if_then_else ( cond1,cond2:bool ) {
	// TODO: eventually support if ( cond ) expr; and such
	if ( cond1 ) {
		debug(cond1);
	}
	if ( cond1 ) {
		debug(cond1);
	} else {
		debug(cond2);
	}
	if ( cond1 ) {
		debug(cond1);
	} elif ( cond2 ) {
		debug(cond2);
	}
}

///////////
// for loop

[export]
def test_for ( i : int ) {
	for ( x in range(1,i) ) {
		debug(x);
	}
	for ( x,y in range(1,i),count() ) {
		debug(x);
		debug(y);
	}
}

/////////
// piping

def take_anything ( a ) {
	debug(a);
}

def take_any_two ( a,b ) {
	debug(a);
	debug(b);
}

[export]
def test_pipes() {
	take_anything() <| 13;		// lpipe
	13.1 |> take_anything();	// rpipe
	take_anything() $ {
		print("this is block;");	// piping block
	};
	take_anything() $ ( a : int ) {
		print("this is block which takes argument {a};");	// piping block
	};
	take_anything() {				// naked block
		print("this is block;");
	};
	take_any_two(13) {				// argument and naked block
		print("this is block;");
	};
	13 |> take_any_two() {			// lpipe and naked block
		print("this is block;");
	};
	take_anything() @ ( a,b : int ) {
		print("this is lambda which takes 2 arguments");
		return 13; // and returns value
	};
}


///////
// main

[export]
def main {
	// var f <- {1=>"a", 2=>"b", 3=>"c", 4=>"d"};
	// debug(f);
}

options log;

