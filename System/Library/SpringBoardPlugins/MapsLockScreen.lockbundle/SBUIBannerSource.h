/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerSource <NSObject>
@optional
-(void)bannerViewWillAppear:(id)arg1;
-(void)bannerViewDidAppear:(id)arg1;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;

@required
-(id)newBannerViewForContext:(id)arg1;
-(id)peekNextBannerItemForTarget:(id)arg1;
-(id)dequeueNextBannerItemForTarget:(id)arg1;

@end
