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



#import "MSDirectoryServicesModels.h"


/** Implementation for MSDirectoryServicesVerifiedDomain
 *
 */
@implementation MSDirectoryServicesVerifiedDomain


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"capabilities", @"capabilities", @"default", @"_default", @"id", @"_id", @"initial", @"initial", @"name", @"name", @"type", @"type", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.DirectoryServices.VerifiedDomain";

        
    }

	return self;
}

/** Setter implementation for property capabilities
 *
 */
- (void) setCapabilities: (NSString *) value {
    _capabilities = value;
    [self valueChanged:_capabilities forProperty:@"capabilities"];
}
       
/** Setter implementation for property _default
 *
 */
- (void) setDefault: (bool) value {
    __default = value;
    [self valueChangedForBool:__default forProperty:@"default"];
}
       
/** Setter implementation for property _id
 *
 */
- (void) setId: (NSString *) value {
    __id = value;
    [self valueChanged:__id forProperty:@"id"];
}
       
/** Setter implementation for property initial
 *
 */
- (void) setInitial: (bool) value {
    _initial = value;
    [self valueChangedForBool:_initial forProperty:@"initial"];
}
       
/** Setter implementation for property name
 *
 */
- (void) setName: (NSString *) value {
    _name = value;
    [self valueChanged:_name forProperty:@"name"];
}
       
/** Setter implementation for property type
 *
 */
- (void) setType: (NSString *) value {
    _type = value;
    [self valueChanged:_type forProperty:@"type"];
}
       

@end
