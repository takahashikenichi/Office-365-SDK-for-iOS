/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import "MSGraphServiceODataEntities.h"

@implementation MSGraphServiceApplicationFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSGraphServiceApplication class]]) {

		_operations = [[MSGraphServiceApplicationOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateApplication:(id)entity callback:(void (^)(MSGraphServiceApplication *application, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteApplication:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSGraphServiceExtensionPropertyCollectionFetcher *)getextensionProperties {

    return [[MSGraphServiceExtensionPropertyCollectionFetcher alloc] initWithUrl:@"extensionProperties" parent:self asClass:[MSGraphServiceExtensionProperty class]];
}

- (id<MSGraphServiceExtensionPropertyFetcher>)getextensionPropertiesById:(NSString *)_id {

    return [[[MSGraphServiceExtensionPropertyCollectionFetcher alloc] initWithUrl:@"extensionProperties" parent:self asClass:[MSGraphServiceExtensionProperty class]] getById:_id];
}

- (MSGraphServiceDirectoryObjectFetcher *) getcreatedOnBehalfOf {

	 return [[MSGraphServiceDirectoryObjectFetcher alloc] initWithUrl:@"createdOnBehalfOf" parent:self asClass:[MSGraphServiceDirectoryObject class]];
}

- (MSGraphServiceDirectoryObjectCollectionFetcher *)getowners {

    return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self asClass:[MSGraphServiceDirectoryObject class]];
}

- (id<MSGraphServiceDirectoryObjectFetcher>)getownersById:(NSString *)_id {

    return [[[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self asClass:[MSGraphServiceDirectoryObject class]] getById:_id];
}

@end