/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (assign,nonatomic) long long errorCode; 
@property (assign,nonatomic) int reason; 
@property (nonatomic,copy) NSString * reasonDescription; 
+(id)speechFailure;
+(id)speechFailureWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)reason;
-(id)groupIdentifier;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(BOOL)requiresResponse;
-(NSString *)reasonDescription;
-(void)setReasonDescription:(NSString *)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)encodedClassName;
@end

