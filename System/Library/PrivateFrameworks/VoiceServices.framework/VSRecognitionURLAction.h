/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSRecognitionAction.h>

@class NSURL;

@interface VSRecognitionURLAction : VSRecognitionAction {

	NSURL* _url;

}
-(void)dealloc;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)perform;
-(int)completionType;
@end
