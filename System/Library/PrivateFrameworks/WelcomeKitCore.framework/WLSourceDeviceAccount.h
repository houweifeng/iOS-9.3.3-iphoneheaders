/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLSourceDeviceAccount : NSObject {

	unsigned long long _sqlID;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long sqlID;              //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
+(BOOL)accountInfoArrayContainsNonSyncableAccount:(id)arg1 ;
+(BOOL)accountInfoRepresentsSyncableAccount:(id)arg1 ;
+(id)accountWithInfo:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)sqlID;
-(void)setSqlID:(unsigned long long)arg1 ;
@end
