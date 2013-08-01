/*
 * Site: restbed.net
 * Author: Ben Crowhurst
 *
 * Copyright (c) 2013 Restbed Core Development Team and Community Contributors
 *
 * This file is part of Restbed.
 *
 * AppOn is free software: you can redistribute it and/or modify
 * it under the terms of the Lesser GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AppOn is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * Lesser GNU General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with AppOn.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _RESTBED_DETAIL_STRING_IMPL_H
#define _RESTBED_DETAIL_STRING_IMPL_H 1

//System Includes
#include <string>
#include <vector>

//Project Includes

//External Includes

//System Namespaces

//Project Namespaces

//External Namespaces

namespace restbed
{
    //Forward Declarations
    
    namespace detail
    {
        //Forward Declarations
        
        class StringImpl
        {
            public:
                //Friends
                
                //Definitions

                //Constructors
                
                //Functionality
                static std::string trim( const std::string& value );
            
                static std::string to_upper( const std::string& value );

                static std::vector< std::string > split( const std::string& text, const char delimiter );

                //Getters
                
                //Setters
                
                //Operators
                
                //Properties
                static const char* empty;
            
            protected:
                //Friends
                
                //Definitions
                
                //Constructors
                
                //Functionality
                
                //Getters
                
                //Setters
                
                //Operators
                
                //Properties
                
            private:
                //Friends
                
                //Definitions
                
                //Constructors
                StringImpl( void ) = delete;
                
                StringImpl( const StringImpl& original ) = delete;
                
                virtual ~StringImpl( void ) = delete;

                //Functionality
                
                //Getters
                
                //Setters
                
                //Operators
                StringImpl& operator =( const StringImpl& rhs ) = delete;

                //Properties
        };
    }
}

#endif  /* _RESTBED_DETAIL_STRING_IMPL_H */
