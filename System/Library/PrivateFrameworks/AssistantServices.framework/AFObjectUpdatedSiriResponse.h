/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@class NSURL;

@interface AFObjectUpdatedSiriResponse : AFSiriResponse {

	NSURL* _objectIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithRequest:(id)arg1 objectIdentifier:(id)arg2 ;
-(id)_objectIdentifier;
@end

