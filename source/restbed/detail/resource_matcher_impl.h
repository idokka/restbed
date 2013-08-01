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

#ifndef _RESTBED_DETAIL_RESOURCE_MATCHER_IMPL_H
#define _RESTBED_DETAIL_RESOURCE_MATCHER_IMPL_H 1

//System Includes

//Project Includes

//External Includes

//System Namespaces

//Project Namespaces

//External Namespaces

namespace restbed
{
    //Forward Declarations
    class Request;
    class Resource;
    
    namespace detail
    {
        //Forward Declarations

        class ResourceMatcherImpl
        {
            public:
                //Friends
                
                //Definitions

                //Constructors
                ResourceMatcherImpl( const Request& request );
            
                ResourceMatcherImpl( const ResourceMatcherImpl& original );
            
                virtual ~ResourceMatcherImpl( void );

                //Functionality

                //Getters

                //Setters

                //Operators
                bool operator ( )( const Resource& resource ) const;

                bool operator <( const ResourceMatcherImpl& rhs ) const;
                
                bool operator >( const ResourceMatcherImpl& rhs ) const;
                
                bool operator ==( const ResourceMatcherImpl& rhs ) const;
                
                bool operator !=( const ResourceMatcherImpl& rhs ) const;

                //Properties
                
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
                
                //Functionality
                
                //Getters
                
                //Setters
                
                //Operators
                ResourceMatcherImpl& operator =( const ResourceMatcherImpl& rhs ) = delete;

                //Properties
                const Request& m_request;
        };
    }
}

#endif  /* _RESTBED_DETAIL_RESOURCE_MATCHER_IMPL_H */
