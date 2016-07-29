/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSFetchRequest.h>

@class NSDictionary, NSHashTable;

@interface NSCachingFetchRequest : NSFetchRequest {

	NSDictionary* _substitutionVariables;
	NSHashTable* _cachingCoordinators;
	BOOL _hasCachedInfo;
	id _identifier;

}

@property (nonatomic,copy) NSDictionary * substitutionVariables; 
@property (nonatomic,readonly) id _identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(id)_generateIdentifier;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(id)_copyForDirtyContext;
-(NSDictionary *)substitutionVariables;
-(void)_registerCachingCoordinator:(id)arg1 ;
-(BOOL)_hasRegisteredCachingCoordinator:(id)arg1 ;
-(void)_sanityCheckVariables:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_identifier;
@end
