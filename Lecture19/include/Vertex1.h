#ifndef VERTEX1_H
#define VERTEX1_H

#include "DynArr.h"
#include "Edge.h"

template<class T>
class Vertex{

	private:
	
		DynArr< Edge > edges;
		T data;
		
	public:
	
		Vertex( ) : edges(), data( ) {}
	
		Vertex( const T& dataIn ) : edges(), data( dataIn ) {}
		
		T get_vertex_value() const{
			
			return data;
		}
		
		void set_vertex_value(const T& dataIn){
			
			data = dataIn;
		}
	
};

#endif
