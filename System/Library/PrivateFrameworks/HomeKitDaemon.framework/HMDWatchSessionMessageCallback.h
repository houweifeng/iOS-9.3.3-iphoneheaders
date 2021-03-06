/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface HMDWatchSessionMessageCallback : NSObject {

	/*^block*/id _responseHandler;
	NSObject*<OS_dispatch_source> _responseTimer;

}

@property (nonatomic,copy) id responseHandler;                                         //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> responseTimer;              //@synthesize responseTimer=_responseTimer - In the implementation block
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(id)initWithResponseHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)responseTimer;
-(void)setResponseTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

