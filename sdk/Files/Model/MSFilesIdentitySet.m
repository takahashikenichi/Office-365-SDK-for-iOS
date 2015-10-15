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



#import "MSFilesModels.h"


/** Implementation for MSFilesIdentitySet
 *
 */
@implementation MSFilesIdentitySet


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"application", @"application", @"user", @"user", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.FileServices.IdentitySet";

        
    }

	return self;
}

/** Setter implementation for property application
 *
 */
- (void) setApplication: (MSFilesIdentity *) value {
    _application = value;
    [self valueChanged:_application forProperty:@"application"];
}
       
/** Setter implementation for property user
 *
 */
- (void) setUser: (MSFilesIdentity *) value {
    _user = value;
    [self valueChanged:_user forProperty:@"user"];
}
       

@end
