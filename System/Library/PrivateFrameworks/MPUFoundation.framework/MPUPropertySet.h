/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSDictionary;

@interface MPUPropertySet : NSObject <NSCopying, NSMutableCopying> {

	NSSet* _properties;
	NSDictionary* _relationships;

}

@property (nonatomic,readonly) NSSet * properties;                        //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSDictionary * relationships;              //@synthesize relationships=_relationships - In the implementation block
+(id)propertySetWithProperties:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)properties;
-(id)initWithProperties:(id)arg1 relationships:(id)arg2 ;
-(NSDictionary *)relationships;
-(id)propertySetByCombiningWithPropertySet:(id)arg1 ;
@end
