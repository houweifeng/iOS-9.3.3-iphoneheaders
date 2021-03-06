/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:34 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	unsigned long long _passBytes;
	unsigned long long _peekBytes;
	NSURL* _url;

}

@property (assign) unsigned long long passBytes;              //@synthesize passBytes=_passBytes - In the implementation block
@property (assign) unsigned long long peekBytes;              //@synthesize peekBytes=_peekBytes - In the implementation block
@property (retain) NSURL * url;                               //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowVerdict;
+(id)dropVerdict;
+(id)needRulesVerdict;
+(id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2 ;
+(id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)passBytes;
-(unsigned long long)peekBytes;
-(void)setPassBytes:(unsigned long long)arg1 ;
-(void)setPeekBytes:(unsigned long long)arg1 ;
@end

