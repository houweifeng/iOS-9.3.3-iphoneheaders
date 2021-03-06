/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject {

	AVOutputSettingsAssistantInternal* _internal;

}

@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSString * outputFileType; 
+(id)baseSettingsProviderForPreset:(id)arg1 ;
+(id)videoSettingsAdjusterForPreset:(id)arg1 ;
+(id)videoEncoderCapabilities;
+(BOOL)validatesSourceVideoMinFrameDuration;
+(id)_allOutputSettingsPresets;
+(id)outputSettingsAssistantWithPreset:(id)arg1 ;
+(id)availableOutputSettingsPresets;
-(void)dealloc;
-(id)init;
-(NSDictionary *)audioSettings;
-(NSString *)outputFileType;
-(const opaqueCMFormatDescriptionRef)sourceVideoFormat;
-(const opaqueCMFormatDescriptionRef)sourceAudioFormat;
-(SCD_Struct_CM5)sourceVideoAverageFrameDuration;
-(SCD_Struct_CM5)sourceVideoMinFrameDuration;
-(id)initWithPreset:(id)arg1 ;
-(void)setSourceAudioFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoAverageFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setSourceVideoMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setSourceVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(NSDictionary *)videoSettings;
-(void)finalize;
@end

