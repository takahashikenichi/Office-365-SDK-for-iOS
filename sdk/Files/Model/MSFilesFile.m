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



/** Implementation for MSFilesFile
 *
 */
@implementation MSFilesFile


@synthesize odataType = _odataType;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"contentUrl", @"contentUrl", @"image", @"image", @"createdBy", @"createdBy", @"eTag", @"eTag", @"id", @"_id", @"lastModifiedBy", @"lastModifiedBy", @"name", @"name", @"parentReference", @"parentReference", @"size", @"size", @"dateTimeCreated", @"dateTimeCreated", @"dateTimeLastModified", @"dateTimeLastModified", @"type", @"type", @"webUrl", @"webUrl", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.FileServices.File";
        
        
    }

	return self;
}

/** Setter implementation for property contentUrl
 *
 */
- (void) setContentUrl: (NSString *) value {
    _contentUrl = value;
    [self valueChanged:_contentUrl forProperty:@"contentUrl"];
}
       
/** Setter implementation for property image
 *
 */
- (void) setImage: (MSFilesImageFacet *) value {
    _image = value;
    [self valueChanged:_image forProperty:@"image"];
}
       

@end
