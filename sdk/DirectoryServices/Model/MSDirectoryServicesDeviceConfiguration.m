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



/** Implementation for MSDirectoryServicesDeviceConfiguration
 *
 */
@implementation MSDirectoryServicesDeviceConfiguration


@synthesize odataType = _odataType;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"publicIssuerCertificates", @"publicIssuerCertificates", @"cloudPublicIssuerCertificates", @"cloudPublicIssuerCertificates", @"registrationQuota", @"registrationQuota", @"maximumRegistrationInactivityPeriod", @"maximumRegistrationInactivityPeriod", @"objectType", @"objectType", @"objectId", @"objectId", @"deletionTimestamp", @"deletionTimestamp", @"createdOnBehalfOf", @"createdOnBehalfOf", @"createdObjects", @"createdObjects", @"manager", @"manager", @"directReports", @"directReports", @"members", @"members", @"memberOf", @"memberOf", @"owners", @"owners", @"ownedObjects", @"ownedObjects", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.DirectoryServices.DeviceConfiguration";
        
        
		_publicIssuerCertificates = [[NSMutableArray alloc] initWithCollectionType:@"NSMutableArray"];
		_cloudPublicIssuerCertificates = [[NSMutableArray alloc] initWithCollectionType:@"NSMutableArray"];
    }

	return self;
}

/** Setter implementation for property publicIssuerCertificates
 *
 */
- (void) setPublicIssuerCertificates: (NSMutableArray *) value {
    _publicIssuerCertificates = value;
    [self valueChanged:_publicIssuerCertificates forProperty:@"publicIssuerCertificates"];
}
       
/** Setter implementation for property cloudPublicIssuerCertificates
 *
 */
- (void) setCloudPublicIssuerCertificates: (NSMutableArray *) value {
    _cloudPublicIssuerCertificates = value;
    [self valueChanged:_cloudPublicIssuerCertificates forProperty:@"cloudPublicIssuerCertificates"];
}
       
/** Setter implementation for property registrationQuota
 *
 */
- (void) setRegistrationQuota: (int) value {
    _registrationQuota = value;
    [self valueChangedForInt:_registrationQuota forProperty:@"registrationQuota"];
}
       
/** Setter implementation for property maximumRegistrationInactivityPeriod
 *
 */
- (void) setMaximumRegistrationInactivityPeriod: (int) value {
    _maximumRegistrationInactivityPeriod = value;
    [self valueChangedForInt:_maximumRegistrationInactivityPeriod forProperty:@"maximumRegistrationInactivityPeriod"];
}
       

@end
