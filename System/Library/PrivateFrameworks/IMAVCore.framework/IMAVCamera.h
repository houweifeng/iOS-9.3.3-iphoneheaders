/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMAVCamera : NSObject {

	id _internalDevice;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) long long cameraStyle; 
@property (nonatomic,readonly) BOOL isWideScreen; 
@property (nonatomic,readonly) BOOL hasShutter; 
@property (nonatomic,readonly) BOOL isShutterOpen; 
@property (nonatomic,readonly) BOOL isSuspended; 
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(long long)cameraStyle;
-(id)_initWithAVCamera:(id)arg1 ;
-(BOOL)isWideScreen;
-(BOOL)hasShutter;
-(BOOL)isShutterOpen;
-(id)_AVCamera;
-(NSString *)uniqueID;
@end
