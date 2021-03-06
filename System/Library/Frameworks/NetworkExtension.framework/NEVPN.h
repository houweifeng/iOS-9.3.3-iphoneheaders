/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEVPNProtocol;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _onDemandEnabled;
	NSArray* _onDemandRules;
	NEVPNProtocol* _protocol;
	NSArray* _exceptionApps;

}

@property (getter=isEnabled) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;              //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (copy) NSArray * onDemandRules;                               //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (copy) NEVPNProtocol * protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (copy) NSArray * exceptionApps;                               //@synthesize exceptionApps=_exceptionApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NEVPNProtocol *)protocol;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)isOnDemandEnabled;
-(NSArray *)onDemandRules;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(id)copyProfileDictionaryWithCertificateUUID:(id)arg1 ;
-(NSArray *)exceptionApps;
-(void)setExceptionApps:(NSArray *)arg1 ;
@end

