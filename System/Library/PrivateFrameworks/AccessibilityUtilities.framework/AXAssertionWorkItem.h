/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXAssertionWorkItem : NSObject {

	BOOL _acquire;
	NSString* _type;
	NSString* _identifier;
	unsigned long long _retries;

}

@property (nonatomic,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL acquire;                          //@synthesize acquire=_acquire - In the implementation block
@property (assign,nonatomic) unsigned long long retries;              //@synthesize retries=_retries - In the implementation block
-(unsigned long long)retries;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)type;
-(id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(BOOL)arg3 ;
-(void)setRetries:(unsigned long long)arg1 ;
-(BOOL)acquire;
@end
