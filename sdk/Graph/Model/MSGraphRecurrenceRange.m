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


/** Implementation for MSGraphRecurrenceRange
 *
 */
@implementation MSGraphRecurrenceRange


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"Type", @"type", @"StartDate", @"startDate", @"EndDate", @"endDate", @"NumberOfOccurrences", @"numberOfOccurrences", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.Graph.RecurrenceRange";

        
    }

	return self;
}

/** Setter implementation for property type
 *
 */
- (void) setType: (MSGraphRecurrenceRangeType) value {
    _type = value;
    [self valueChangedForInt:_type forProperty:@"Type"];
}
       

- (void)setTypeString:(NSString *)value {
    
    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         [NSNumber numberWithInt:MSGraphRecurrenceRangeTypeEndDate], @"EndDate", [NSNumber numberWithInt:MSGraphRecurrenceRangeTypeNoEnd], @"NoEnd", [NSNumber numberWithInt:MSGraphRecurrenceRangeTypeNumbered], @"Numbered",
            nil        
        ];
    }
    
    self.type = [stringMappings[value] intValue]; 
}

/** Setter implementation for property startDate
 *
 */
- (void) setStartDate: (NSDate *) value {
    _startDate = value;
    [self valueChanged:_startDate forProperty:@"StartDate"];
}
       
/** Setter implementation for property endDate
 *
 */
- (void) setEndDate: (NSDate *) value {
    _endDate = value;
    [self valueChanged:_endDate forProperty:@"EndDate"];
}
       
/** Setter implementation for property numberOfOccurrences
 *
 */
- (void) setNumberOfOccurrences: (int) value {
    _numberOfOccurrences = value;
    [self valueChangedForInt:_numberOfOccurrences forProperty:@"NumberOfOccurrences"];
}
       

@end
