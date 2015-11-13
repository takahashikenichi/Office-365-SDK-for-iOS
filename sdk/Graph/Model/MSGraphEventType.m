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



#import "MSGraphEventType.h"

@implementation MSGraphEventTypeSerializer

+(MSGraphEventType) fromString:(NSString *) string {

    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         [NSNumber numberWithInt:MSGraphEventTypeSingleInstance], @"SingleInstance", [NSNumber numberWithInt:MSGraphEventTypeOccurrence], @"Occurrence", [NSNumber numberWithInt:MSGraphEventTypeException], @"Exception", [NSNumber numberWithInt:MSGraphEventTypeSeriesMaster], @"SeriesMaster",
            nil        
        ];
    }
    
    return [stringMappings[string] intValue];

}

+(NSString *) toString: (MSGraphEventType) value {

    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         @"SingleInstance", [NSNumber numberWithInt:MSGraphEventTypeSingleInstance], @"Occurrence", [NSNumber numberWithInt:MSGraphEventTypeOccurrence], @"Exception", [NSNumber numberWithInt:MSGraphEventTypeException], @"SeriesMaster", [NSNumber numberWithInt:MSGraphEventTypeSeriesMaster],
            nil        
        ];
    }
    
    return stringMappings[[NSNumber numberWithInt:value]];
}

@end
