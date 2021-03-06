/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNPageCoordinateDictionary : NSObject {

	map<TSUColumnRowCoordinate, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, SFUtility::ObjcSharedPtr<NSObject> > > >* _pageCoordinateDictionary;
	opaque_pthread_rwlock_t _rwlock;

}
-(void)setObject:(id)arg1 forPageCoordinate:(SCD_Struct_TS315)arg2 ;
-(id)objectForPageCoordinate:(SCD_Struct_TS315)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)allObjects;
@end

