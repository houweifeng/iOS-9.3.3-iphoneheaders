/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:31 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKRWLock : NSObject {

	opaque_pthread_rwlock_t _rwLock;

}
-(void)dealloc;
-(id)init;
-(void)unlock;
-(void)wrlock;
-(void)rdlock;
-(int)tryrdlock;
@end
