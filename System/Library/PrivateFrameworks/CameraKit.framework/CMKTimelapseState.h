/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, CLLocation;

@interface CMKTimelapseState : NSObject <NSCoding, NSCopying> {

	BOOL _usingFrontCamera;
	BOOL _allFramesWritten;
	int _captureOrientation;
	float _focusLensPosition;
	NSString* _timelapseUUID;
	NSDate* _startTime;
	CLLocation* _startLocation;
	NSDate* _lastFrameResponseTime;
	NSDate* _stopTime;
	long long _stopReasons;
	double _captureTimeInterval;
	long long _frameIndexStride;
	long long _nextFrameIndex;

}

@property (nonatomic,retain) NSString * timelapseUUID;                                     //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (assign,getter=isUsingFrontCamera,nonatomic) BOOL usingFrontCamera;              //@synthesize usingFrontCamera=_usingFrontCamera - In the implementation block
@property (assign,nonatomic) int captureOrientation;                                       //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) CLLocation * startLocation;                                   //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,retain) NSDate * lastFrameResponseTime;                               //@synthesize lastFrameResponseTime=_lastFrameResponseTime - In the implementation block
@property (nonatomic,retain) NSDate * stopTime;                                            //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) long long stopReasons;                                        //@synthesize stopReasons=_stopReasons - In the implementation block
@property (assign,nonatomic) BOOL allFramesWritten;                                        //@synthesize allFramesWritten=_allFramesWritten - In the implementation block
@property (nonatomic,readonly) double captureTimeInterval;                                 //@synthesize captureTimeInterval=_captureTimeInterval - In the implementation block
@property (nonatomic,readonly) long long frameIndexStride;                                 //@synthesize frameIndexStride=_frameIndexStride - In the implementation block
@property (nonatomic,readonly) long long nextFrameIndex;                                   //@synthesize nextFrameIndex=_nextFrameIndex - In the implementation block
@property (assign,nonatomic) float focusLensPosition;                                      //@synthesize focusLensPosition=_focusLensPosition - In the implementation block
@property (nonatomic,readonly) long long connectionMode; 
+(double)maxTimeToWaitForWrittenFrameAfterStop;
+(id)stateWithContentsOfFile:(id)arg1 ;
-(BOOL)mergeSecondaryState:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartLocation:(CLLocation *)arg1 ;
-(NSDate *)startTime;
-(void)setStopTime:(NSDate *)arg1 ;
-(BOOL)_commonCMKTimelapseStateInitWithCoder:(id)arg1 ;
-(NSDate *)stopTime;
-(int)captureOrientation;
-(void)setCaptureOrientation:(int)arg1 ;
-(long long)stopReasons;
-(BOOL)addStopReasons:(long long)arg1 stopTime:(id)arg2 ;
-(BOOL)isEqualToState:(id)arg1 ;
-(long long)nextFrameIndex;
-(NSString *)timelapseUUID;
-(void)setStopReasons:(long long)arg1 ;
-(BOOL)canContinueCapture;
-(BOOL)allFramesWritten;
-(void)setAllFramesWritten:(BOOL)arg1 ;
-(BOOL)incrementFrameIndex;
-(id)filePathForNextFrameIndex;
-(BOOL)isReadyForWritingMovie;
-(void)forceCompleted;
-(BOOL)writeToFile:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2 ;
-(long long)connectionMode;
-(void)setTimelapseUUID:(NSString *)arg1 ;
-(BOOL)isUsingFrontCamera;
-(void)setUsingFrontCamera:(BOOL)arg1 ;
-(CLLocation *)startLocation;
-(NSDate *)lastFrameResponseTime;
-(void)setLastFrameResponseTime:(NSDate *)arg1 ;
-(double)captureTimeInterval;
-(long long)frameIndexStride;
-(float)focusLensPosition;
-(void)setFocusLensPosition:(float)arg1 ;
@end

