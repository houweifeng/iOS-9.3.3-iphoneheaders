/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetWriterInputMetadataAdaptorInternal, AVAssetWriterInput;

@interface AVAssetWriterInputMetadataAdaptor : NSObject {

	AVAssetWriterInputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
+(void)initialize;
+(id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithAssetWriterInput:(id)arg1 ;
-(AVAssetWriterInput *)assetWriterInput;
-(BOOL)appendTimedMetadataGroup:(id)arg1 ;
-(void)finalize;
@end

