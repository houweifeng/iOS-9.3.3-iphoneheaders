/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@class RCCompositionComposedAssetWriter, NSError, NSURL;

@interface RCTrimAudioFileOperation : RCTrimTimeRangeOperation {

	RCCompositionComposedAssetWriter* _assetWriter;
	BOOL _success;
	BOOL _createWaveform;
	NSError* _error;
	double _exportedDuration;
	NSURL* _sourceURL;
	NSURL* _destinationURL;

}

@property (nonatomic,copy,readonly) NSURL * sourceURL;                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) BOOL createWaveform;                      //@synthesize createWaveform=_createWaveform - In the implementation block
+(id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1 ;
-(void)cancel;
-(double)progress;
-(void)main;
-(NSURL *)sourceURL;
-(NSURL *)destinationURL;
-(BOOL)success;
-(id)error;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(BOOL)arg3 timeRange:(SCD_Struct_RC4)arg4 trimMode:(long long)arg5 ;
-(double)exportedDuration;
-(BOOL)createWaveform;
@end
