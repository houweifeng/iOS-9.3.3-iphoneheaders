/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RCLayoutMetrics : NSObject <NSCopying> {

	SCD_Struct_RC15 _metricInfo;
	NSString* _label;
	double _hPresentedRecordMemoHeight;

}

@property (nonatomic,readonly) double vDeltaWaveformToTimeBaseline; 
@property (nonatomic,readonly) double vDeltaTimeBaselineToTitleBaseline; 
@property (nonatomic,readonly) double vDeltaTitleBaselineToDateBaseline; 
@property (nonatomic,readonly) double vDeltaDateBaselineToControlsTop; 
@property (nonatomic,readonly) double vDeltaControlsBottomToBottom; 
@property (nonatomic,readonly) double vDeltaControlsTopToNavigationBottom; 
@property (nonatomic,readonly) BOOL hIsWaveformFlushToEdges; 
@property (nonatomic,readonly) double hDeltaAdditionalInsetFromWaveformEdge; 
@property (nonatomic,readonly) double hDeltaControlButtonsSpacing; 
@property (nonatomic,readonly) double hDeltaTrimProgressInset; 
@property (nonatomic,readonly) double hDeltaAcousticAnnotationLabelToWaveformRight; 
@property (nonatomic,readonly) double hTrimModeInset; 
@property (nonatomic,readonly) double hDetailNavigationBarInset; 
@property (assign,nonatomic) double hPresentedRecordMemoHeight;                                             //@synthesize hPresentedRecordMemoHeight=_hPresentedRecordMemoHeight - In the implementation block
@property (nonatomic,readonly) double vDeltaLockAbsoluteTopToWaveformTop; 
@property (nonatomic,readonly) double vDeltaLockNotificationListBottom; 
@property (nonatomic,readonly) double vDeltaLockNotificationListBottomToRecordingTimeBaseline; 
+(id)defaultMetrics;
+(id)largeVerticalMetrics;
+(id)normalVerticalMetrcis;
+(id)largeHorizontalMetrics;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)hDeltaControlButtonsSpacing;
-(double)vDeltaControlsBottomToBottom;
-(id)initWithLabel:(id)arg1 ;
-(void)setMetricInfo:(SCD_Struct_RC15)arg1 ;
-(double)vDeltaWaveformToTimeBaseline;
-(double)vDeltaTimeBaselineToTitleBaseline;
-(double)vDeltaTitleBaselineToDateBaseline;
-(double)vDeltaDateBaselineToControlsTop;
-(double)vDeltaControlsTopToNavigationBottom;
-(BOOL)hIsWaveformFlushToEdges;
-(double)hDeltaAdditionalInsetFromWaveformEdge;
-(double)hDeltaTrimProgressInset;
-(double)hDeltaAcousticAnnotationLabelToWaveformRight;
-(double)hTrimModeInset;
-(double)hDetailNavigationBarInset;
-(double)vDeltaLockNotificationListTop;
-(double)vDeltaLockNotificationListTopToRecordingTextBaseline;
-(double)vDeltaLockAbsoluteTopToWaveformTop;
-(double)vDeltaLockNotificationListBottom;
-(double)vDeltaLockNotificationListBottomToRecordingTimeBaseline;
-(void)setHPresentedRecordMemoHeight:(double)arg1 ;
-(double)hPresentedRecordMemoHeight;
@end
