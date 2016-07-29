/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying> {

	NSObject* _object;

}

@property (readonly) NSObject * object;              //@synthesize object=_object - In the implementation block
+(BOOL)clearVars;
+(SCD_Struct_MU3*)poolInfo;
+(id)retainingKeyWithObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)object;
-(void)purge;
-(id)initWithObject:(id)arg1 ;
@end
