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

#ifndef _RESTBED_STATUS_CODE_H
#define _RESTBED_STATUS_CODE_H 1

//System Includes
#include <string>

//Project Includes

//External Includes

//System Namespaces

//Project Namespaces

//External Namespaces

namespace restbed
{
    //Forward Declarations

    class StatusCode
    {
        public:
            //Friends
            
            //Definitions
            enum 
            {
                CONTINUE = 100,
                SWITCHING_PROTOCOLS = 101,
                PROCESSING = 102,
                OK = 200,
                CREATED = 201,
                ACCEPTED = 202,
                NON_AUTHORITATIVE_INFORMATION  = 203,
                NO_CONTENT = 204,
                RESET_CONTENT = 205,
                PARTIAL_CONTENT  = 206,
                MULTI_STATUS = 207,
                ALREADY_REPORTED = 208,
                IM_USED = 226,
                MULTIPLE_CHOICES = 300,
                MOVED_PERMANENTLY = 301,
                FOUND = 302,
                SEE_OTHER = 303,
                Not_Modified = 304,
                USE_PROXY = 305,
                RESERVED = 306,
                TEMPORARY_REDIRECT = 307,
                PERMANENT_REDIRECT = 308,
                BAD_REQUEST = 400,
                UNAUTHORIZED = 401,
                PAYMENT_REQUIRED = 402,
                FORBIDDEN = 403,
                NOT_FOUND = 404,
                METHOD_NOT_ALLOWED = 405,
                NOT_ACCEPTABLE = 406,
                PROXY_AUTHENTICATION_REQUIRED = 407,
                REQUEST_TIMEOUT = 408,
                CONFLICT = 409,
                GONE = 410,
                LENGTH_REQUIRED = 411,
                PRECONDITION_FAILED = 412,
                REQUEST_ENTITY_TOO_LARGE = 413,
                REQUEST_URI_TOO_LONG = 414,
                UNSUPPORTED_MEDIA_TYPE = 415,
                REQUESTED_RANGE_NOT_SATISFIABLE = 416,
                EXPECTATION_FAILED = 417,
                UNPROCESSABLE_ENTITY = 422,
                LOCKED = 423,
                FAILED_DEPENDENCY = 424,
                UPGRADE_REQUIRED = 426,
                PRECONDITION_REQUIRED = 428,
                TOO_MANY_REQUESTS = 429,
                REQUEST_HEADER_FIELDS_TOO_LARGE = 431,
                INTERNAL_SERVER_ERROR = 500,
                NOT_IMPLEMENTED = 501,
                BAD_GATEWAY = 502,
                SERVICE_UNAVAILABLE = 503,
                GATEWAY_TIMEOUT = 504,
                HTTP_VERSION_NOT_SUPPORTED = 505,
                VARIANT_ALSO_NEGOTIATES = 506,
                INSUFFICIENT_STORAGE = 507,
                LOOP_DETECTED = 508,
                NOT_EXTENDED = 510,
                NETWORK_AUTHENTICATION_REQUIRED = 511
            };

            //Constructors
            
            //Functionality
            static std::string to_string( const int code );

            //Getters
            
            //Setters
            
            //Operators
            
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
            StatusCode( void ) = delete;
            
            StatusCode( const StatusCode& original ) = delete;
            
            virtual ~StatusCode( void ) = delete;

            //Functionality
            
            //Getters
            
            //Setters
            
            //Operators
            StatusCode& operator =( const StatusCode& rhs ) = delete;

            //Properties
    };
}

#endif  /* _RESTBED_STATUS_CODE_H */
