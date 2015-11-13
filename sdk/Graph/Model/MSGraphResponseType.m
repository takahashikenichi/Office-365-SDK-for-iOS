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



#import "MSGraphResponseType.h"

@implementation MSGraphResponseTypeSerializer

+(MSGraphResponseType) fromString:(NSString *) string {

    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         [NSNumber numberWithInt:MSGraphResponseTypeNone], @"None", [NSNumber numberWithInt:MSGraphResponseTypeOrganizer], @"Organizer", [NSNumber numberWithInt:MSGraphResponseTypeTentativelyAccepted], @"TentativelyAccepted", [NSNumber numberWithInt:MSGraphResponseTypeAccepted], @"Accepted", [NSNumber numberWithInt:MSGraphResponseTypeDeclined], @"Declined", [NSNumber numberWithInt:MSGraphResponseTypeNotResponded], @"NotResponded",
            nil        
        ];
    }
    
    return [stringMappings[string] intValue];

}

+(NSString *) toString: (MSGraphResponseType) value {

    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         @"None", [NSNumber numberWithInt:MSGraphResponseTypeNone], @"Organizer", [NSNumber numberWithInt:MSGraphResponseTypeOrganizer], @"TentativelyAccepted", [NSNumber numberWithInt:MSGraphResponseTypeTentativelyAccepted], @"Accepted", [NSNumber numberWithInt:MSGraphResponseTypeAccepted], @"Declined", [NSNumber numberWithInt:MSGraphResponseTypeDeclined], @"NotResponded", [NSNumber numberWithInt:MSGraphResponseTypeNotResponded],
            nil        
        ];
    }
    
    return stringMappings[[NSNumber numberWithInt:value]];
}

@end
