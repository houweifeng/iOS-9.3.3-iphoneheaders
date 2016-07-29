/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRVirtualVoiceInputDevice.h>

@class MRDMediaRemoteClient;

@interface MRDVirtualAudioInputServerDevice : MRVirtualVoiceInputDevice {

	MRDMediaRemoteClient* _owningClient;

}

@property (nonatomic,readonly) MRDMediaRemoteClient * owningClient;              //@synthesize owningClient=_owningClient - In the implementation block
-(id)initWithOwningClient:(id)arg1 ;
-(MRDMediaRemoteClient *)owningClient;
-(void)dealloc;
@end
