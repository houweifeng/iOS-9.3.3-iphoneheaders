/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingDataSource.h>

@class BKSApplicationStateMonitor, NSString;

@interface MRDiOSSimulatorNowPlayingDataSource : MRDNowPlayingDataSource {

	BKSApplicationStateMonitor* _appStateMonitor;
	NSString* _cachedFrontmostAppDisplayID;

}
-(BOOL)shouldSendCommand:(id)arg1 ;
-(void)_frontmostApplicationDidChange:(id)arg1 ;
-(BOOL)nowPlayingApplicationIsPlaying;
-(id)nowPlayingApplicationDisplayID;
-(int)nowPlayingApplicationPID;
-(BOOL)anyApplicationIsPlaying;
-(void)dealloc;
-(id)init;
@end
