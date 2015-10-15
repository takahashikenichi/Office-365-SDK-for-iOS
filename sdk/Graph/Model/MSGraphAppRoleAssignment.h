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


#ifndef MSGRAPHAPPROLEASSIGNMENT_H
#define MSGRAPHAPPROLEASSIGNMENT_H

#import <Foundation/Foundation.h>

#import "MSGraphDirectoryObject.h"

/** Interface MSGraphAppRoleAssignment
 *
 */
@interface MSGraphAppRoleAssignment : MSGraphDirectoryObject

/** Property creationTimestamp
 *
 */
@property (nonatomic,  copy, setter=setCreationTimestamp:, getter=creationTimestamp) NSDate * creationTimestamp;

/** Property _id
 *
 */
@property (nonatomic,  copy, setter=setId:, getter=_id) NSString * _id;

/** Property principalDisplayName
 *
 */
@property (nonatomic,  copy, setter=setPrincipalDisplayName:, getter=principalDisplayName) NSString * principalDisplayName;

/** Property principalId
 *
 */
@property (nonatomic,  copy, setter=setPrincipalId:, getter=principalId) NSString * principalId;

/** Property principalType
 *
 */
@property (nonatomic,  copy, setter=setPrincipalType:, getter=principalType) NSString * principalType;

/** Property resourceDisplayName
 *
 */
@property (nonatomic,  copy, setter=setResourceDisplayName:, getter=resourceDisplayName) NSString * resourceDisplayName;

/** Property resourceId
 *
 */
@property (nonatomic,  copy, setter=setResourceId:, getter=resourceId) NSString * resourceId;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
