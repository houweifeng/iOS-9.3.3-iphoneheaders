/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCClientUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;

}

@property (assign) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
