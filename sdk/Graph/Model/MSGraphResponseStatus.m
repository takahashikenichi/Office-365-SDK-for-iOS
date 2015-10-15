/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#import "MSGraphModels.h"


/** Implementation for MSGraphResponseStatus
 *
 */
@implementation MSGraphResponseStatus


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"Response", @"response", @"Time", @"time", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.Graph.ResponseStatus";

        
    }

	return self;
}

/** Setter implementation for property response
 *
 */
- (void) setResponse: (MSGraphResponseType) value {
    _response = value;
    [self valueChangedForInt:_response forProperty:@"Response"];
}
       

- (void)setResponseString:(NSString *)value {
    
    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         [NSNumber numberWithInt:MSGraphResponseTypeNone], @"None", [NSNumber numberWithInt:MSGraphResponseTypeOrganizer], @"Organizer", [NSNumber numberWithInt:MSGraphResponseTypeTentativelyAccepted], @"TentativelyAccepted", [NSNumber numberWithInt:MSGraphResponseTypeAccepted], @"Accepted", [NSNumber numberWithInt:MSGraphResponseTypeDeclined], @"Declined", [NSNumber numberWithInt:MSGraphResponseTypeNotResponded], @"NotResponded",
            nil        
        ];
    }
    
    self.response = [stringMappings[value] intValue]; 
}

/** Setter implementation for property time
 *
 */
- (void) setTime: (NSDate *) value {
    _time = value;
    [self valueChanged:_time forProperty:@"Time"];
}
       

@end
