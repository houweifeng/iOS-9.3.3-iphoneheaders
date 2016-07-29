/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	void* _callbackContextToken;

}

@property (nonatomic,readonly) id listener; 
@property (nonatomic,readonly) /*function pointer*/void* callback;              //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) void* callbackContextToken;                        //@synthesize callbackContextToken=_callbackContextToken - In the implementation block
-(void)dealloc;
-(id)init;
-(id)listener;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)setCallbackContextToken:(void*)arg1 ;
-(void*)callbackContextToken;
-(/*function pointer*/void*)callback;
@end
