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


/** Implementation for MSGraphOAuth2Permission
 *
 */
@implementation MSGraphOAuth2Permission


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"adminConsentDescription", @"adminConsentDescription", @"adminConsentDisplayName", @"adminConsentDisplayName", @"id", @"_id", @"isEnabled", @"isEnabled", @"type", @"type", @"userConsentDescription", @"userConsentDescription", @"userConsentDisplayName", @"userConsentDisplayName", @"value", @"value", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.Graph.OAuth2Permission";

        
    }

	return self;
}

/** Setter implementation for property adminConsentDescription
 *
 */
- (void) setAdminConsentDescription: (NSString *) value {
    _adminConsentDescription = value;
    [self valueChanged:_adminConsentDescription forProperty:@"adminConsentDescription"];
}
       
/** Setter implementation for property adminConsentDisplayName
 *
 */
- (void) setAdminConsentDisplayName: (NSString *) value {
    _adminConsentDisplayName = value;
    [self valueChanged:_adminConsentDisplayName forProperty:@"adminConsentDisplayName"];
}
       
/** Setter implementation for property _id
 *
 */
- (void) setId: (NSString *) value {
    __id = value;
    [self valueChanged:__id forProperty:@"id"];
}
       
/** Setter implementation for property isEnabled
 *
 */
- (void) setIsEnabled: (bool) value {
    _isEnabled = value;
    [self valueChangedForBool:_isEnabled forProperty:@"isEnabled"];
}
       
/** Setter implementation for property type
 *
 */
- (void) setType: (NSString *) value {
    _type = value;
    [self valueChanged:_type forProperty:@"type"];
}
       
/** Setter implementation for property userConsentDescription
 *
 */
- (void) setUserConsentDescription: (NSString *) value {
    _userConsentDescription = value;
    [self valueChanged:_userConsentDescription forProperty:@"userConsentDescription"];
}
       
/** Setter implementation for property userConsentDisplayName
 *
 */
- (void) setUserConsentDisplayName: (NSString *) value {
    _userConsentDisplayName = value;
    [self valueChanged:_userConsentDisplayName forProperty:@"userConsentDisplayName"];
}
       
/** Setter implementation for property value
 *
 */
- (void) setValue: (NSString *) value {
    _value = value;
    [self valueChanged:_value forProperty:@"value"];
}
       

@end
