/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface LSDatabaseBuilder : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _dbQueue;

}
-(void)setSeedingComplete:(BOOL)arg1 ;
-(id)initWithIOQueue:(id)arg1 registrationQueue:(id)arg2 ;
-(void)createAndSeedLocalDatabase:(BOOL*)arg1 ;
-(void)dealloc;
@end
