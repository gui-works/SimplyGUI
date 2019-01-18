// This file defines all the available types in SimplyGUI.
// Also the definitions for template classes are defined in this file
// You are free to modify any types to your project's needs.
#ifndef SIMPLYGUI_TYPES_H
#define SIMPLYGUI_TYPES_H
#include <vector> // Include std::vector

// Vector classes are template classes with typedefs defined.
// These classes do have operator overloaders so you are able to easily multiply as long as type is the same
/**
* SimplyVec2 template vector class, can contain types:
* float, int, double
*/
template<class T>
class SimplyVec2 {
public:
	T x; /**< x component of the vector */
	T y; /**< y component of the vector */
	
	// Operators overloaders

	/**
	* += Operator Method, adds param to this
	* param other The other vector
	* @return void
	*/
	void operator+=(SimplyVec2<T> other) {
		this->x += other.x;
		this->y += other.y;
	}

	/**
	* -= Operator Method, subtracts param to this
	* param other The other vector
	* @return void
	*/
	void operator-=(SimplyVec2<T> other) {
		this->x -= other.x;
		this->y -= other.y;
	}

	/**
	* *= Operator Method, multiplies param to this
	* param other The other vector
	* @return void
	*/
	void operator*=(SimplyVec2<T> other) {
		this->x *= other.x;
		this->y *= other.y;
	}

	/**
	* /= Operator Method, devides param to this
	* param other The other vector
	* @return void
	*/
	void operator/=(SimplyVec2<T> other) {
		this->x /= other.x;
		this->y /= other.y;
	}

	/**
	* + Operator Method, adds up 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec2<T>
	*/
	SimplyVec2<T> operator+(SimplyVec2<T> other) {
		SimplyVec2<T> vector;
		vector->x = this->x + other.x;
		vector->y = this->y + other.y;
		return vector;
	}

	/**
	* - Operator Method, subtracts 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec2<T>
	*/
	SimplyVec2<T> operator-(SimplyVec2<T> other) {
		SimplyVec2<T> vector;
		vector->x = this->x - other.x;
		vector->y = this->y - other.y;
		return vector;
	}

	/**
	* * Operator Method, multiplies 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec2<T>
	*/
	SimplyVec2<T> operator*(SimplyVec2<T> other) {
		SimplyVec2<T> vector;
		vector->x = this->x * other.x;
		vector->y = this->y * other.y;
		return vector;
	}

	/**
	* / Operator Method, devides 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec2<T>
	*/
	SimplyVec2<T> operator/(SimplyVec2<T> other) {
		SimplyVec2<T> vector;
		vector->x = this->x / other.x;
		vector->y = this->y / other.y;
		return vector;
	}

	// Methods

	/**
	* Constructor, Sets both x and y to 0
	* @return void
	*/
	SimplyVec2<T>() {
		this->x = 0;
		this->y = 0;
	}

	/**
	* Constructor, sets x and y to param
	* @param x The x component of the vector.
	* @return void
	*/
	SimplyVec2<T>(T x) {
		this->x = x;
		this->y = x;
	}

	/**
	* Constructor, sets x and y
	* @param x The x component of the vector.
	* @param y The y component of the vector.
	* @return void
	*/
	SimplyVec2<T>(T x, T y) {
		this->x = x;
		this->y = y;
	}
};


/**
* SimplyVec3 template vector class, can contain types:
* float, int, double
*/
template<class T>
class SimplyVec3 {
public:
	T x; /**< x component of the vector */
	T y; /**< y component of the vector */
	T z; /**< z component of the vector */

	// Operators overloaders

	/**
	* += Operator Method, adds param to this
	* param other The other vector
	* @return void
	*/
	void operator+=(SimplyVec3<T> other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
	}

	/**
	* -= Operator Method, subtracts param to this
	* param other The other vector
	* @return void
	*/
	void operator-=(SimplyVec3<T> other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
	}

	/**
	* *= Operator Method, multiplies param to this
	* param other The other vector
	* @return void
	*/
	void operator*=(SimplyVec3<T> other) {
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;
	}

	/**
	* /= Operator Method, devides param to this
	* param other The other vector
	* @return void
	*/
	void operator/=(SimplyVec3<T> other) {
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
	}

	/**
	* + Operator Method, adds up 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec3<T>
	*/
	SimplyVec3<T> operator+(SimplyVec3<T> other) {
		SimplyVec3<T> vector;
		vector->x = this->x + other.x;
		vector->y = this->y + other.y;
		vector->z = this->z + other.z;
		return vector;
	}

	/**
	* - Operator Method, subtracts 2 vectors then returns.
	* param other The other vectors
	* @return SimplyVec3<T>
	*/
	SimplyVec3<T> operator-(SimplyVec3<T> other) {
		SimplyVec3<T> vector;
		vector->x = this->x - other.x;
		vector->y = this->y - other.y;
		vector->z = this->z - other.z;
		return vector;
	}

	/**
	* * Operator Method, multiplies 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec3<T>
	*/
	SimplyVec3<T> operator*(SimplyVec3<T> other) {
		SimplyVec3<T> vector;
		vector->x = this->x * other.x;
		vector->y = this->y * other.y;
		vector->z = this->z * other.z;
		return vector;
	}

	/**
	* / Operator Method, devides 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec3<T>
	*/
	SimplyVec3<T> operator/(SimplyVec3<T> other) {
		SimplyVec3<T> vector;
		vector->x = this->x / other.x;
		vector->y = this->y / other.y;
		vector->z = this->z / other.z;
		return vector;
	}

	// Methods

	/**
	* Constructor, Sets both x and y to 0
	* @return void
	*/
	SimplyVec3<T>() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	/**
	* Constructor, sets x and y to param
	* @param x The x component of the vector.
	* @return void
	*/
	SimplyVec3<T>(T x) {
		this->x = x;
		this->y = x;
		this->z = x;
	}

	/**
	* Constructor, sets x and y, and sets z to y
	* @param x The x component of the vector.
	* @param y The y component of the vector.
	* @return void
	*/
	SimplyVec3<T>(T x, T y) {
		this->x = x;
		this->y = y;
		this->z = y;
	}

	/**
	* Constructor, sets x and y, z.
	* @param x The x component of the vector.
	* @param y The y component of the vector.
	* @param z The z component of the vector.
	* @return void
	*/
	SimplyVec3<T>(T x, T y, T z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
};


/**
* SimplyVec4 template vector class, can contain types:
* float, int, double
*/
template<class T>
class SimplyVec4 {
public:
	T x; /**< x component of the vector */
	T y; /**< y component of the vector */
	T z; /**< z component of the vector */
	T w; /**< z component of the vector */

	// Operators overloaders

	/**
	* += Operator Method, adds param to this
	* param other The other vector
	* @return void
	*/
	void operator+=(SimplyVec4<T> other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
		this->w += other.w;
	}

	/**
	* -= Operator Method, subtracts param to this
	* param other The other vector
	* @return void
	*/
	void operator-=(SimplyVec4<T> other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
		this->w -= other.w;
	}

	/**
	* *= Operator Method, multiplies param to this
	* param other The other vector
	* @return void
	*/
	void operator*=(SimplyVec4<T> other) {
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;
		this->w *= other.w;
	}

	/**
	* /= Operator Method, devides param to this
	* param other The other vector
	* @return void
	*/
	void operator/=(SimplyVec4<T> other) {
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
		this->w /= other.w;
	}

	/**
	* + Operator Method, adds up 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec4<T>
	*/
	SimplyVec4<T> operator+(SimplyVec4<T> other) {
		SimplyVec4<T> vector;
		vector->x = this->x + other.x;
		vector->y = this->y + other.y;
		vector->z = this->z + other.z;
		vector->w = this->w + other.w;
		return vector;
	}

	/**
	* - Operator Method, subtracts 2 vectors then returns.
	* param other The other vectors
	* @return SimplyVec4<T>
	*/
	SimplyVec4<T> operator-(SimplyVec4<T> other) {
		SimplyVec4<T> vector;
		vector->x = this->x - other.x;
		vector->y = this->y - other.y;
		vector->z = this->z - other.z;
		vector->w = this->w - other.w;
		return vector;
	}

	/**
	* * Operator Method, multiplies 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec4<T>
	*/
	SimplyVec4<T> operator*(SimplyVec4<T> other) {
		SimplyVec4<T> vector;
		vector->x = this->x * other.x;
		vector->y = this->y * other.y;
		vector->z = this->z * other.z;
		vector->w = this->w * other.w;
		return vector;
	}

	/**
	* / Operator Method, devides 2 vectors then returns.
	* param other The other vector
	* @return SimplyVec4<T>
	*/
	SimplyVec4<T> operator/(SimplyVec4<T> other) {
		SimplyVec4<T> vector;
		vector->x = this->x / other.x;
		vector->y = this->y / other.y;
		vector->z = this->z / other.z;
		vector->w = this->w / other.w;
		return vector;
	}

	// Methods

	/**
	* Constructor, Sets x, y, z, w to 0
	* @return void
	*/
	SimplyVec4<T>() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
		this->w = 0;
	}

	/**
	* Constructor, sets x, y, z, w to param
	* @param x The x component of the vector.
	* @return void
	*/
	SimplyVec4<T>(T x) {
		this->x = x;
		this->y = x;
		this->z = x;
		this->w = x;
	}

	/**
	* Constructor, sets x and y, and sets z and w to y
	* @param x The x component of the vector.
	* @param y The y component of the vector.
	* @return void
	*/
	SimplyVec4<T>(T x, T y) {
		this->x = x;
		this->y = y;
		this->z = y;
		this->w = y;
	}

	/**
	* Constructor, sets x and y, z, and sets w to z
	* @param x The x component of the vector.
	* @param y The y component of the vector.
	* @param z The z component of the vector.
	* @return void
	*/
	SimplyVec4<T>(T x, T y, T z) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = z;
	}

	/**
	* Constructor, sets x, y , z , w
	* @param x The x component of the vector.
	* @param y The y component of the vector.
	* @param z The z component of the vector.
	* @param w The w component of the vector.
	* @return void
	*/
	SimplyVec4<T>(T x, T y, T z, T w) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}
};

// Define typedefs for vector templates
typedef SimplyVec2<float> SimplyVec2f;
typedef SimplyVec2<double> SimplyVec2d;
typedef SimplyVec2<int> SimplyVec2i;

typedef SimplyVec3<float> SimplyVec3f;
typedef SimplyVec3<double> SimplyVec3d;
typedef SimplyVec3<int> SimplyVec3i;

typedef SimplyVec4<float> SimplyVec4f;
typedef SimplyVec4<double> SimplyVec4d;
typedef SimplyVec4<int> SimplyVec4i;

// SimplyGUI User Interface Classes

// The main element class, contains a position and color vectors, instances of these class are required for rendering,
// Children instances get deleted whenever SimplyGui::NewFrame() gets called.
class SimplyElement {
private:
	//Vectors
	SimplyVec2f position;  /**< The position vector */
	SimplyVec2f scale; /**< The scale vector */
	SimplyVec4f color; /**< The color of the element, this color can mostly be used for a background */
	
	//Other members
	std::vector<SimplyElement*> children; /**< The children of the element*/
	SimplyElement* parent; /**< The parent element, if nullptr Element has no parent */
public:
	/**
	* Constructor, Initializes variables
	*/
	SimplyElement() {
		this->parent = nullptr; // Set parent to nullptr
	}

	/**
	* Sets the position vector of this SimplyElement instance
	* @param position The position vector.
	* @return void
	*/
	void SetPosition2f(SimplyVec2f position) {
		this->position = position;
	}

	/**
	* Returns the position vector
	* @return SimplyVec2f
	*/
	SimplyVec2f GetPosition2f() {
		return this->position;
	}

	/**
	* Sets the scale vector of this SimplyElement instance
	* @param scale The scale vector.
	* @return void
	*/
	void SetScale2f(SimplyVec2f scale) {
		this->scale = scale;
	}

	/**
	* Returns the scale vector
	* @return SimplyVec2f
	*/
	SimplyVec2f GetScale2f() {
		return this->scale;
	}

	/**
	* Sets the color vector of this SimplyElement instance
	* @param color The color vector.
	* @return void
	*/
	void SetColor4f(SimplyVec4f color) {
		this->color = color;
	}

	/**
	* Returns the color vector
	* @return SimplyVec4f
	*/
	SimplyVec4f GetColor4f() {
		return this->color;
	}

	/**
	* Adds a child to the children list for this frame
	@ param element Pointer to the SimplyElement to add
	@ return void
	*/
	void AddChild(SimplyElement* element) {
		this->children.push_back(element);
		element->parent = this; // Set parent to this instance
	}

	/**
	* Deletes all the children instances.
	* This method is not to be called by end-user
	@ return void
	*/
	void OnNewFrame() {
		for (size_t i = 0; i < this->children.size(); i++) {
			children[i]->OnNewFrame(); // Call OnNewFrame() method on children
			delete children[i]; // Delete instance.

			// Should not be needed as this instance gets destroyed after this call, But just to be more clear we do.
			this->children.erase(this->children.begin() + i); 
		}
	}

	/**
	* Returns the parent element, or nullptr if there is no parent
	* @return SimplyElement*
	*/
	SimplyElement* GetParent() {
		return this->parent;
	}
};

#endif // !SIMPLYGUI_TYPES_H