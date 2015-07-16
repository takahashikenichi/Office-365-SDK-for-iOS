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
#import "MSOutlookModels.h"

/**
* The implementation file for type ResponseStatus.
*/

@implementation MSOutlookResponseStatus	

@synthesize odataType = _odataType;
@synthesize Response = _response;
@synthesize Time = _time;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.ResponseStatus";
	}

	return self;
}

- (void)setResponseString:(NSString *)value {

	if ([value isEqualToString:@"None"]) {

		_response = MSOutlook_ResponseType_None;
        [self valueChangedForInt:MSOutlook_ResponseType_None forProperty:@"Response"];
	}

	if ([value isEqualToString:@"Organizer"]) {

		_response = MSOutlook_ResponseType_Organizer;
        [self valueChangedForInt:MSOutlook_ResponseType_Organizer forProperty:@"Response"];
	}

	if ([value isEqualToString:@"TentativelyAccepted"]) {

		_response = MSOutlook_ResponseType_TentativelyAccepted;
        [self valueChangedForInt:MSOutlook_ResponseType_TentativelyAccepted forProperty:@"Response"];
	}

	if ([value isEqualToString:@"Accepted"]) {

		_response = MSOutlook_ResponseType_Accepted;
        [self valueChangedForInt:MSOutlook_ResponseType_Accepted forProperty:@"Response"];
	}

	if ([value isEqualToString:@"Declined"]) {

		_response = MSOutlook_ResponseType_Declined;
        [self valueChangedForInt:MSOutlook_ResponseType_Declined forProperty:@"Response"];
	}

	if ([value isEqualToString:@"NotResponded"]) {

		_response = MSOutlook_ResponseType_NotResponded;
        [self valueChangedForInt:MSOutlook_ResponseType_NotResponded forProperty:@"Response"];
	}
}

- (void)setTime:(NSDate *) time {
    _time = time;
	[self valueChanged:time forProperty:@"Time"];
}
    
@end