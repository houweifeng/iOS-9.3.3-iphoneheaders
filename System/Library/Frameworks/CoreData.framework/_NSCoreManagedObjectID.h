/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(BOOL)accessInstanceVariablesDirectly;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)_storeInfo1;
+(void)_storeDeallocated;
+(id)alloc;
+(id)retain;
+(void)release;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(long long)version;
-(id)persistentStore;
-(id)_storeInfo1;
-(id)_storeIdentifier;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)entity;
-(id)entityName;
-(BOOL)isTemporaryID;
-(id)URIRepresentation;
-(void)finalize;
@end

